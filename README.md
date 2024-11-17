# CrowPanel
Included in this repository will be two separate projects. The first one is a modification of the code to allow SquareLine Studio version 1.5 to work with the Elecrow CrowPanel for the ESP32 Display-7 inch SKU:DISP08070H version 3. I was given a working copy of the code from Elecrow on Friday. These versions are only for the version 3 board and for the 7 inch screen. The include file gfx_conf.h is not included since its sole purpose was to define other screen sizes.

The touch.h file is included and contains much of the configuration for the touch panel. The placement within the code is crucial. It is a section of code that was moved to separate file from the main application and relies on objects being created prior to being introduced. This must be included after the LGFX lcd object has been created.

This version uses the TAMC_911 library and have commented out the PCA9557 (out) because it is not handled in the touch_int(). 
I have attempted to better document the files to indicated what is going on. \
Libraries to include:
esp32 by Expressif Systems 2.9.15  
Arduino ESP32 Boards by Arduino 20.0.13
LovyanGFX by Lovyan03 1.1.12
lvgl by kisvegabor 8.3.11
PCA9557
TAMC_GT911
Board to use
ESP32S3 Dev Module
PSRAM; opi psram
Partition Scheme: Huge App

