// Modified by RC Roeder Vov 2024
// esp32 by Expressif Systems 2.9.15
// Arduino ESP32 Boards by Arduino 20.0.13
// LovyanGFX by Lovyan03 1.1.12
// lvgl by kisvegabor 8.3.11
// PCA9557
// TAMMC_GT911

// PSRAM; opi psram
// Partition Scheme: Huge App

//#include <lvgl.h>                                     // Light and Versatile Graphics Library https://lvgl.io/
//#include <LovyanGFX.hpp>                              // LovyaGFX https://lovyangfx.readthedocs.io/en/latest/02_using.html
//#include <lgfx/v1/platforms/esp32s3/Panel_RGB.hpp>
//#include <lgfx/v1/platforms/esp32s3/Bus_RGB.hpp>
//#include <SPI.h>                                      // Serial Peripheral Interface
#include <Wire.h>                                     // i2c Libraries
//#include <TAMC_GT911.h>                               // Touch Libraries

#include <DIS08070H.h>

#include "ui.h"    
                                   // your UI from SquareLine
const int SDApin = 19;
const int SCLpin = 20;

void setup()
{
  
  Serial.begin(9600);
  Wire.begin(SDApin, SCLpin);                 // pins for i2c
  CrowPanelDisplaySetup();
  
ui_init();
  
  Serial.println( "Setup done" );
}

void loop()
{
  lv_timer_handler();     /* let the GUI do its work */
  delay( 10 );
   
}
