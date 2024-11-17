
#include <lvgl.h>                                     // Light and Versatile Graphics Library https://lvgl.io/
#include <LovyanGFX.hpp>                              // LovyaGFX https://lovyangfx.readthedocs.io/en/latest/02_using.html
#include <lgfx/v1/platforms/esp32s3/Panel_RGB.hpp>
#include <lgfx/v1/platforms/esp32s3/Bus_RGB.hpp>
#include <SPI.h>                                      // Serial Peripheral Interface
#include <Wire.h>                                     // i2c Libraries
#include <TAMC_GT911.h> 

void CrowPanelDisplaySetup(void);