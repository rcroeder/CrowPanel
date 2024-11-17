# CrowPanel
Included in this repository will be two separate projects. The first one is a modification of the code to allow SquareLine Studio version 1.5 to work with the Elecrow CrowPanel for the ESP32 Display-7 inch SKU:DISP08070H version 3. I was given a working copy of the code from Jennie at Elecrow on Friday. These versions are only for the version 3 board and for the 7 inch screen. The include file gfx_conf.h is not needed since its sole purpose was to define other screen sizes.

The touch.h file is included and contains much of the configuration for the touch panel. The placement within the code is crucial. It is a section of code that was moved to separate file from the main application and relies on objects being created prior to being introduced. This must be included after the LGFX lcd object has been created.

This version uses the TAMC_911 library and have commented out the PCA9557 (out) because it is not handled in the touch_int(). 

I have attempted to better document the files to indicated what is going on. 

The two projects are CrowPanelTouchFix and CrowPanelTouchFixRefactored. The first project is just a working version of the code that closely matches the course 'Get Started with ESP32- Lesson 06 - Design UI with Squareline Studio' video. 

The second project CrowPanelTouchFixRefactored simplifies it down to to Setup and Loop moving all of the code needed to setup the display into an include file DIS08070H in the libraries. Not sure this is the best place for it but it does what I need to be done. Maybe Elecrow will follow this format for the other displays of this series. The touch.h is moved into the DIS08070H and should be incorporated in the files directly. I chose CrowPanelDisplaySetup() in the setup so switching out to different display would be possible.

For this to work you need to install exactly the following Libraries and select the proper board and version of ESP32. I have not tested this against other versions.
Boards:
esp32 by Expressif Systems 2.9.15  

Libraries:
LovyanGFX by Lovyan03 1.1.12
lvgl by kisvegabor 8.3.11
TAMC_GT911
Wire.h
SPI.h

Board to use
ESP32S3 Dev Module
PSRAM; opi psram
Partition Scheme: Huge App

