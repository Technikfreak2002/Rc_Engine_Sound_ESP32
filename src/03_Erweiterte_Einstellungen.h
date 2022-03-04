#include <Arduino.h>

// ****************************************************************************************************************************
// ERWEITERTE EINSTELLUNGEN                                                                                                
// ****************************************************************************************************************************

// Einige dieser Optionen können in der "vehicle" Datei bereits vorkommen! (Warum macht man sowas????)
// Sollte beim Hochladen ein "redefinition errro" angezeigt werden, die Option wieder Auskommentieren! "//" davor!
#define XENON_LIGHTS // Xenoneffekt bei den Scheinwerfern, wenn aktiviert.
//#define SEPARATE_FULL_BEAM // The full beam is a separate bulb, connected to roof lights pin. Connect roof lights to side lights in this case
//#define INDICATOR_SIDE_MARKERS // The indicators are used as side markers as well. This is commonly used in US trucks.

// More light configurations ---------------------------------------------------------------------------------------------------------------------
#define NO_CABLIGHTS // The cablights step in the lights sequence is skipped, if defined
#define NO_FOGLIGHTS // The foglights step in the lights sequence is skipped, if defined
//#define THIRD_BRAKLELIGHT // if defined, pin 32 is used for a third brake light, otherwise for a trailer presence switch (pulled to GND = no trailer attached)
#define FLICKERING_WHILE_CRANKING // The lights will flicker a bit during engine cranking, otherwise they are just a bit dimmed
//#define HAZARDS_WHILE_5TH_WHEEL_UNLOCKED // Hazards on, if 5th wheel is unlocked

// Adjust the brightness of your lights here -----------------------------------------------------------------------------------------------------
// All brightness values 0 - 255
uint8_t cabLightsBrightness = 255; // Usually 255, 100 for Actros
uint8_t sideLightsBrightness = 200; // Usually 200, 100 for WPL C44, 50 for Landy, 100 for P407, 150 for Actros
uint8_t rearlightDimmedBrightness = 30; // tailligt brigthness, if not braking, about 30
uint8_t rearlightParkingBrightness = 0; // 0, if you want the taillights being off, if side lights are on, or about 5 if you want them on (0 for US Mode)
uint8_t headlightParkingBrightness = 0; // 0, if you want the headlights being off, if side lights are on, or about 5 if you want them on (0 for US Mode)
uint8_t reversingLightBrightness = 140; // Around 140, 50 for Landy

// Neopixel settings (experimental)--------------------------------------------------------------------------------------------------------------- 
//#define NEOPIXEL_ENABLED // GPIO0 used for WS2812 Neopixel control, if defined!
#define NEOPIXEL_COUNT 16 // How many Neopixels?
#define NEOPIXEL_BRIGHTNESS  5 // Brightness (255 is the maximum)

/* SERVO OUTPUT SETTINGS ************************************************************************************************
 *  
 * The CH1 - CH6 headers are used as outputs in BUS communication mode (SBUS, IBUS, PPM)
 * This allows to use as super compact "bus-only" receiver
 * Set the endpoints here in 1000 - 2000 microseconds (equal to -45 to 45° servo angle)
 * !! WARNING: Don't connect a receiver to the "CH1 - CH6" headers, if BUS communication is selected. Ihis will short them out!!
 * 
 * Uncommenting "#define SERVO_DEBUG" in the main tab allows to calibrate the servo positions easily:
 * 1. select the "SERVOS_DEFAULT" servo configuration
 * 2. upload the sketch
 * 3. connect the servo you want to calibrate to the steeting channel CH2 on the sound controller
 * 4. turn your steering wheel until you cave the position you want
 * 5. write down the microseconds reading, which is displayed in the Arduino IDE serial monitor
 * 6. do it for every position
 * 7. make a servo configuration profile, using these values
 * 8. select this profile and upload the sketch
 * 9. that's it!
 */

// Default servo configuration profile ------------------------------------------------------------------------------------------
// Servo frequency
const uint8_t SERVO_FREQUENCY = 50; // usually 50Hz, some servos may run smoother @ 100Hz
 
// WARNING: never connect receiver PWM signals to the "CH" pins in BUS communication mode!

// Servo limits 
const uint16_t CH1L = 1000, CH1C = 1500, CH1R = 2000; // CH1 steering left, center, right
const uint16_t CH2L = 1000, CH2C = 1500, CH2R = 2000; // CH2 transmission gear 1, 2, 3
const uint16_t CH3L = 1300, CH3C = 1450, CH3R = 1600; // CH3 winch pull, off, release
const uint16_t CH4L = 1300, CH4R = 1700; // CH4 trailer coupler (5th. wheel) locked, unlocked

// Servo ramp time 
const uint16_t STEERING_RAMP_TIME = 0; // 0 = fastest speed, enlarge it to around 3000 for "scale" servo movements

/* DASHBOARD SETTINGS ************************************************************************************************
 *  
 * for the Dashboard by Gamadril :https://github.com/Gamadril/Rc_Engine_Sound_ESP32
 * 
 * Before you can use it (not required, if Visual Studio Code is used instead of Arduino, see platformio.ini in this case):
 * create the folder TFT_eSPI_Setups inside your Arduino TFT_eSPI library directory
 * move/copy the file Setup43_ST7735_ESP32_80x160.h to TFT_eSPI_Setups directory
 * replace the line #include <User_Setup.h> in the file User_Setup_Select.h inside TFT_eSPI library folder with #include <TFT_eSPI_Setups/Setup43_ST7735_ESP32_80x160.h>
 * modify the Setup43_ST7735_ESP32_80x160.h file if you use other pins for the display connection
 */

//#define SPI_DASHBOARD // A 0.96" SPI LCD is used as dashboard: https://www.ebay.ch/itm/174458054566?hash=item289e82a7a6:g:LpAAAOSwtL1fdDtI 

// WARNING:
// Pins 18 (SCL), 19 (DC), 21 (RES) & 23 (SDA) are used for the dashboard in this case!
// The dispay CS pin needs to be connected to GND.
// Shaker, sidelights and both beacon flashers will not work!

uint8_t dashRotation = 3; // 3 = normal, 1 = upside down
 
#define MAX_REAL_SPEED 110                 // max speed in km/h to show on the dashboard
int manualGearRatios[3] = {305, 165, 100}; // TAMIYA gear ratios: 1st 1:32.49, 2nd 1:17.66, 3rd 1:10.66, value div 100 (used for real shifting transmissions only!)
#define RPM_MAX 500                        // always 500
