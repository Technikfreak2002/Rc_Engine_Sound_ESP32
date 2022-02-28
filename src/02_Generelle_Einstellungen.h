#include <Arduino.h>

// ****************************************************************************************************************************
// GENERELLE EINSTELLUNGEN                                                                                                
// ****************************************************************************************************************************

// ****************************************************************************************************************************
// Automatische Funktionen
// ****************************************************************************************************************************
// Entferne "//" um die Automatik auszuwählen

//#define AUTO_LIGHTS // Lichter werden mit dem Motorstatus oder mit Soundcontroller CH5 gesteuert
#define AUTO_ENGINE_ON_OFF    // Motor wird automatisch mit "GAS" gestartet oder mit Soundcontroller CH5
#define AUTO_INDICATORS       // Blinker werden automatisch mit der Lenkung oder mit Soundcontroller CH6 gesteuert.
#define IND_ON    100         // Blinker werden ab +/- diesem Wert eingeschaltet. (z.B 1500 + 300 = 1800 Blinker Rechts an, 1500 - 300 = 1200 Blinker Links an)
#define IND_DIR   true        // Bei normaler Lenkung true, bei invertierter Lenkung false

// ****************************************************************************************************************************
// EMPFÄNGER
// Wähle, wie dein Empfänger an den Soundcontroller angeschlossen ist. WICHTIG! IMMER NUR EINE VERBINDUNGSART AUSWÄHLEN!!!!
// ****************************************************************************************************************************

// PWM Servo (CH1 - CH6, klassische/antike Verbindung der einzelnen Servo Kanäle. 6 Kanäle. Nicht empfohlen! Ungenau!) --------
// PWM Ist immer dann aktiv, wenn kein anderer Verbindungsmode ausgewählt wurde.

// SBUS Protokoll (RX Anschluss, 13 Kanäle. Empfohlenes, sicheres Protokoll mit FailSafe)--------
//#define SBUS_COMMUNICATION // Signale werden digital via SBUS übertragen (abwählen "// vor #define" für klassik PWM)
//boolean sbusInverted = false; // false = für nicht-invertierte SBUS Syteme (z.B. Micro RC von TheDiyGuy999)

// IBUS Protokoll (RX Anschluss, 13 Kanäle. Nicht Empfohlen da kein FailSave!) --------
#define IBUS_COMMUNICATION // Signale werden digital via IBUS übertragen (abwählen "// vor #define" für klassik PWM)

// SUMD Protokoll (RX Anschluss, 12 Kanäle, z.B. Graupner) --------
//#define SUMD_COMMUNICATION // Signale werden digital via SUMD übertragen (abwählen "// vor #define" für klassik PWM)

// PPM Protokoll (RX Anschluss, 8 Kanäle, funktioniert, ist aber sehr ungenau! Nur wenn unbedingt nötig!) --------
//#define PPM_COMMUNICATION // Signale werden analog via PPM übertragen (abwählen "// vor #define" für klassik PWM)

// ****************************************************************************************************************************
// KANAL ZUWEISUNG -----
// ****************************************************************************************************************************

// Interner Name #######  //Empfänger Kanal ##  // Soundcontroller Kanal ##########################################
#define STEERING          1                     // CH1 steering
#define GEARBOX           6                     // CH2 3 position switch for gearbox (left throttle in tracked mode)
#define THROTTLE          3                     // CH3 throttle & brake (right throttle in tracked mode)
#define HORN              5                     // CH4 horn and bluelight / siren
#define FUNCTION_R        2                     // CH5 jake brake, high / low beam, headlight flasher, engine on / off
#define FUNCTION_L        4                     // CH6 indicators, hazards
#define POT2              8                     // CH7 pot 2
#define MODE1             7                     // CH8 mode 1 switch
#define MODE2             9                     // CH9 mode 2 switch
#define MOMENTARY1        NONE                  // CH10
#define HAZARDS           NONE                  // CH11
#define INDICATOR_LEFT    NONE                  // CH12
#define INDICATOR_RIGHT   NONE                  // CH13

// true = Kanal invertiert
boolean channelReversed[14] = {
  false,  // CH0 (unused)
  false,  // CH1
  false,  // CH2
  false,  // CH3
  false,  // CH4
  false,  // CH5
  false,  // CH6
  false,  // CH7
  false,  // CH8
  false,  // CH9
  false,  // CH10
  false,  // CH11
  false,  // CH12
  false   // CH13
}; 

// Auto Nullpunkt abgleich. Nicht bei Schalten, Potis oder unbenutzten Kanälen verwenden!
boolean channelAutoZero[14] = {
  false,  // CH0 (unused)
  false,  // CH1
  false,  // CH2
  false,  // CH3
  false,  // CH4
  false,  // CH5
  false,  // CH6
  false,  // CH7
  false,  // CH8
  false,  // CH9
  false,  // CH10
  false,  // CH11
  false,  // CH12
  false   // CH13
}; 

// ****************************************************************************************************************************
// KANAL BEREICHE -----
// ****************************************************************************************************************************
const uint16_t pulseNeutral = 30; // 1500 +/- diesem Wert (ca. 30) wird als Neutral angenommen
const uint16_t pulseSpan = 480; // theoretisch 500 (1500 in Mittelstellung +/-500 = 1000 - 2000ms) normal etwa 480

// ****************************************************************************************************************************
// KANAL EXPO
// ****************************************************************************************************************************
// Diese Einstellungen haben nur dann Auswirkungen, wenn Fahrregler und Lenkservo am Soundcotroller angeschlossen sind.
// Das ermöglicht auch die virtuelle Massensimulation.
// Bei normaler Verbindung haben diese Einstellungen keine Auswirkung!
// ACHTUNG! Sollte das ESP32 nicht mehr reagieren kann dies zu unvorhersehbaren Ausfällen führen!
// Es wird jegliche Haftung ausgeschlossen!
// Diese Einstellungen solten an der Fernbedinung erfolgen!
// ****************************************************************************************************************************

//#define EXPONENTIAL_THROTTLE // Exponentielle "GAS" Kurve. Gibt bessere Kontrolle im unternen Gas-Bereich. Speziell für Crawler
//#define EXPONENTIAL_STEERING // Exponentielle "LENK" Kurve. Gib bessere Kontrolle bei kleinen Lenkeinschlägen
