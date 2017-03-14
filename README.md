This is a modified version of the BLDC tool to support data logging to CSV file. Original repo by vedderb can be found here: https://github.com/vedderb/bldc-tool

To begin a logging session, click the Start/Stop Record button just below the CAN Fwd box. Data will be written continuously to dataExportRecord.csv, in the same folder as your BLDC tool application, until the Start/Stop button is clicked again. Currently, data can only be written to this single file path. Once logging is complete, rename or copy the file to another directory before beginning a new logging session.

BLDC tool is a Qt gui to control and debug the custom BLDC controller created by vedderb. A complete description and tutorial about how to use it can be found here: http://vedder.se/2015/01/vesc-open-source-esc/

Quick build instructions for Ubuntu:

1. `sudo apt-get install qtcreator qt-sdk libudev-dev libqt5serialport5-dev`

2. `qmake -qt=qt5`

3. `make clean && make`

4. Allow for serial access without using sudo: `sudo adduser $USER dialout`

5. Restart for access changes to take effect `sudo reboot now`

6. Start BLDC-tool from inside of the built repo `./BLDC_Tool`

Windows and OS X builds available :

https://bldc-tool.support
