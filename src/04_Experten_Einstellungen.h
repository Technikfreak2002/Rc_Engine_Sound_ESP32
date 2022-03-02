#include <Arduino.h>

// ****************************************************************************************************************************
// EXPERTEN EINSTELLUNGEN                                                                                                
// ****************************************************************************************************************************
// Viele dieser Einstellungen werden nur in speziellen Fällen benötigt und können so belassen werden.
// Änderungen mit Sorgfalt vornehmen!

// ****************************************************************************************************************************
// GETRIEBE EINSTELLUNGEN                                                                                                
// ****************************************************************************************************************************
/* General TRANSMISSION SETTINGS ************************************************************************************************
 *  
 * Most transmission settings like automatic, double clutch etc. are done in the vehicle configuration files in the /vehicles/ directory.
 * 
 */

// #define VIRTUAL_3_SPEED allows to simulate a 3 speed shifing transmission, if your vehicle doesn't have a real one.
// Gears are shifted, using the 3 position switch. Example: your crawler has a 2 speed transmission, which is used as off road reducer,
// but no real 3 speed shifting transmission. Don't uncomment if for vehicles with electric or hydrostatic drive or automatic transmissions!
//#define VIRTUAL_3_SPEED
//#define VIRTUAL_16_SPEED_SEQUENTIAL // This is still experimental!

//#define TRANSMISSION_NEUTRAL Allows to put the transmission in neutral. This can't be used, if the "Mode 1" button is used for other stuff!
//#define TRANSMISSION_NEUTRAL

//#define MODE1_SHIFTING The 2 speed transmission is shifted by the "Mode 1" button instead of the 3 position switch (Micro RC remote only).
// This is often used in WPL vehicles with 2 speed transmission, used as off road reducer
//#define MODE1_SHIFTING

uint16_t maxClutchSlippingRpm = 250; // The clutch will never slip above this limit! (about 250) 500 for vehicles like locomotives
// and the Kirovets tractor with hydrostatic or electric drive! Mainly required for "VIRTUAL_3_SPEED" mode

// In some cases we want a faster reverse acceleration for automatic transmission vehicles. Around 170% for Landy
uint16_t automaticReverseAccelerationPercentage = 100;

// Automatic transmission with overdrive (lower RPM in top gear, gear ratio lower than 1:1, 4 & 6 speed only)
#define OVERDRIVE // This is usually on, but don't use it for double clutch transmissions!

//#define DOUBLE_CLUTCH // Double-clutch (Zwischengas) Enable this for older trucks without synchronised gears

// ****************************************************************************************************************************
// ESC EINSTELLUNGEN                                                                                                
// ****************************************************************************************************************************
/* Recommended ESC & settings

*****************************************************************************
ESC: HOBBYWING 1080 QUICRUN WP Crawler Brushed with the following settings:
Vehicle: TAMIYA trucks with 3 speed transmission
Motor: 540 size, 35 turns, stock pinion

For more details refer to the ESC manual.
Uncommented settings are left on factory preset
1: 3
2: 1 (1=  LiPo, 2 = NIMH battery)
3: 3
4: 3
5: 4
6: 2
7: 9
8: 1 
9: 8 (change it, important)
10: 4
11: 4
12: 5
13: 5 (16KHz = less whining)
14: 1 (be careful here, this will change the BEC voltage!!)
15: 1 (change it, important)

*****************************************************************************
ESC: HOBBYWING QUICRUN FUSION motor / ESC combo with the following settings:
Vehicle: RGT EX86100 Jeep Crawler, stock pinion, 3S LiPo
Motor: Integrated brushless

Make sure you are uncommenting (remove //) "#define QUICRUN_FUSION" below!

For more details refer to the ESC manual.
Uncommented settings are left on factory preset
1: 2 (change it, 1 is jerky)
2: 1
3: 3
4: 1
5: 2 (change it, if Vehicle is driving in wrong direction)
6: 1 (be careful here, this will change the BEC voltage!!)
7: 5
8: 1 
9: 4 (change reverse speed as you prefer)

*****************************************************************************
HOBBYWING 1060 is working as well, but 1080 is still better

*****************************************************************************
AS-12/6RW EASY from Modellbau-Regler.de is recommended for smaller vehicles (WPL, MN Model etc.)

*****************************************************************************

*/

// ESC SETTINGS ******************************************************************************************************

// ESC type selection:
//#define QUICRUN_FUSION // Linearity compensation for HOBBYWING Quicrun Fusion

// Drive direction adjustment:
//#define ESC_DIR // uncomment this, if your motor is spinning in the wrong direction

// Top speed adjustment:
// Usually 500 ( = 1000 - 2000 microseconds output or -45° to 45° servo angle) Enlarge it, if your vehicle is too fast
// - The Hobbywing 1060 is reaching full throttle (forward) @ about 1800 Microseconds, so we need about 640 for full throttle
// - Hobbywing 1060 ESC & RBR/C 370 motor & 2 speed shifting transmission = 1600
// - Hobbywing 1060 ESC & stock WPL 370 motor & 2 speed shifting transmission = 650
// - Hobbywing 1040 ESC & stock 20T 540 motor in RGT EX86100 = 640
// - Hobbywing 1080 ESC & 35T 540 motor for TAMIYA trucks with 3 speed transmission = 1200
// - Hobbywing 1080 ESC & RBR/C 370 motor in Carson Mercedes racing truck (top speed = 160km/h) = 900
// - Modellbau-Regler.de AS-12/6RW EASY ESC = 600
const int16_t escPulseSpan = 500; // 500 = full ESC power available, 1000 half ESC power available etc. 

// Additional takeoff punch:
// Usually 0. Enlarge it, if your motor is too weak around neutral.
// - Hobbywing 1060 ESC & RBR/C 370 motor & 2 speed shifting transmission = 80
// - Hobbywing 1060 ESC & stock WPL 370 motor & 2 speed shifting transmission = 10
// - Hobbywing 1080 ESC & 35T 540 motor for TAMIYA trucks with 3 speed transmission = 40 (was 0)
// - Hobbywing 1080 ESC & 35T 540 motor for HERCULES HOBBY trucks with 3 speed transmission = 150
// - Hobbywing 1080 ESC & RBR/C 370 motor in Carson Mercedes racing truck = 50
const int16_t escTakeoffPunch = 0; 

// Additional reverse speed (disconnect & reconnect battery after changing this setting):
// Usually 0. Enlarge it, if your reverse speed is too slow.
// - Hobbywing 1060 ESC & RBR/C 370 motor & 2 speed shifting transmission = 220
// - Hobbywing 1060 ESC & stock WPL 370 motor & 2 speed shifting transmission = 150
// - Hobbywing 1080 ESC & 35T 540 motor for TAMIYA trucks with 3 speed transmission = 0
// - Hobbywing 1080 ESC & 35T 540 motor for HERCULES HOBBY trucks with 3 speed transmission = 80
const int16_t escReversePlus = 0;

// The shaker is simulating engine vibrations

// Select the shaker configuration you have:
#define GT_POWER_STOCK // <------- Select (remove //) one of the shaker configurations below
//#define GT_POWER_PLASTIC

// ****************************************************************************************************************************
// SHAKER EINSTELLUNGEN                                                                                                
// ****************************************************************************************************************************

// GT-Power shaker with brass weight in stock condition ------------------------------------------------------------------------------
// Used in:
// - TAMIYA King Hauler
#ifdef GT_POWER_STOCK

// Shaker parameters (simulating engine vibrations)
const uint8_t shakerStart = 100; // Shaker power while engine start (max. 255, about 100)
const uint8_t shakerIdle = 49; // Shaker power while idling (max. 255, about 49)
const uint8_t shakerFullThrottle = 40; // Shaker power while full throttle (max. 255, about 40)
const uint8_t shakerStop = 60; // Shaker power while engine stop (max. 255, about 60)
#endif

// GT-Power shaker with 3D printed plastic weight ------------------------------------------------------------------------------------
// Used in:
// - Hercules Hobby Actros
#ifdef GT_POWER_PLASTIC

// Shaker parameters (simulating engine vibrations)
const uint8_t shakerStart = 100; // Shaker power while engine start (max. 255, about 100)
const uint8_t shakerIdle = 49; // Shaker power while idling (max. 255, about 49)
const uint8_t shakerFullThrottle = 40; // Shaker power while full throttle (max. 255, about 40)
const uint8_t shakerStop = 60; // Shaker power while engine stop (max. 255, about 60)
#endif

/* TRAILER SETTINGS ************************************************************************************************
 *  
 * The trailer is using ESP-NOW. This means it's communicating, using the 2.4GHz antenna in the ESP32
 * You can use a 2nd, identical controller in your trailer. Of course, it doesn't need an amplifier or a receiver.
 */

//#define WIRELESS_TRAILER // Disable it, if no wireless trailer is used. It may cause noise in the speaker, if no trailer is detected.
//#define TRAILER_LIGHTS_TRAILER_PRESENCE_SWITCH_DEPENDENT // wireless trailer lights are swiched off, if truck mounted trailer presence switch on pin 32 is closed.

// IMPORTANT!! Replace the addresses below with your trailers MAC addresses!! --------------------------
// Trailer 1
//uint8_t broadcastAddress1[] = {0x4C, 0xEB, 0xD6, 0x7C, 0x02, 0x74}; // Bruder Low Loader
//uint8_t broadcastAddress1[] = {0x4C, 0xEB, 0xD6, 0x7C, 0x1E, 0x10}; // US flatbed
uint8_t broadcastAddress1[] = {0xAC, 0x67, 0xB2, 0x12, 0x30, 0x28}; // white board
//uint8_t broadcastAddress1[] = {0xA0, 0x20, 0xA6, 0x10, 0x46, 0x3B}; // D1 Mini ESP8266

// Trailer 2
//#define TRAILER_2 // Uncomment this, if you want to use a 2nd trailer
//uint8_t broadcastAddress2[] = {0x4C, 0xEB, 0xD6, 0x7C, 0x02, 0x74}; // Bruder Low Loader
uint8_t broadcastAddress2[] = {0xA0, 0x20, 0xA6, 0x10, 0x46, 0x3B}; // D1 Mini ESP8266

// Trailer 3 (EXPERIMENTAL, causing engine RPM issues!)
//#define TRAILER_3 // Uncomment this, if you want to use a 3rd trailer
//uint8_t broadcastAddress3[] = {0x4C, 0xEB, 0xD6, 0x7C, 0x02, 0x74}; // Bruder Low Loader
uint8_t broadcastAddress3[] = {0xA0, 0x20, 0xA6, 0x10, 0x46, 0x3B}; // D1 Mini ESP8266
