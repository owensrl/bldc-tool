This is a modified version of the BLDC tool to support data logging to CSV file. Original project by vedderb can be found here: https://github.com/vedderb/bldc-tool

To begin a logging session, type the desired name of the CSV file in the "Export File Name" box, and click the Start/Stop Record button. Data will be written continuously to "exportfilename".csv, in the CSVData folder of your BLDC tool directory, until the Start/Stop button is clicked again. If the user input "Export File Name" does not already exist in the CSVData folder, it will be created automatically.

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
