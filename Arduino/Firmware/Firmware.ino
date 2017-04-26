// // ***************************** Include Libraries *************************************
#include "Arduino.h"
// ****************************************************************************************

// Pin Definitions
#define LCD_PIN_RS	2
#define LCD_PIN_R_W	9
#define LCD_PIN_E	4
#define LCD_PIN_DB4	8
#define LCD_PIN_DB5	6
#define LCD_PIN_DB6	7
#define LCD_PIN_DB7	3

// ***************************** Global variables and defines *****************************

// ****************************************************************************************
// ******************************** object initialization *********************************

// ****************************************************************************************

/* This code sets up the essentials for your circuit to work. It runs first every time your circuit is powered with electricity. */
void setup() {
    // Setup Serial which is useful for debugging
    // Use the Serial Monitor to view printed messages
    Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
    
    // ******************************* LCD16X2 - setup *************************************

    // *************************************************************************************
}

/* This code is the main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop. */
void loop() {
    // ******************************* LCD16X2 - Test Code *********************************
   
    // *************************************************************************************
    
}
