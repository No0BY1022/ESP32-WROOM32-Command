# ESP32-WROOM32-Command
Dont have ESP32-S2?

I got you!

Setting Up ESP32 Button Control
Follow these steps to install and run your ESP32 button control system using Python and Arduino.

Step 1: Install Software
Arduino IDE: Ensure you have the Arduino IDE installed.
Visual Studio Code (VS Code) or any preferred Python IDE.

Step 2: Install Required Python Packages
Open your command prompt(cmd) and run the following commands to install the required Python packages:
- pip install pyserial
- pip install pyautogu

Step 3: Upload the Arduino Code to the ESP32
Open the Arduino IDE.
Load the Arduino Code:
Open the esp32buttons.ino file and paste the code.
Select Your Board and COM Port:
Go to Tools > Board and select ESP32-Dev-Module.
Go to Tools > Port and select COM9 (or the port your ESP32 is connected to).
Upload the Code:
Click on the upload button to flash the code to your ESP32.

Step 4: Run the Python Script
Open VS Code or your preferred Python IDE.
Load the Python Code:
Open the esp32buttons.py file and paste the code.
Run the Script:
Ensure that the ESP32 is connected to your computer, then run the Python script.

Step 5: Verify COM Port Connection
If you encounter issues, follow these steps to ensure the COM port is functioning correctly:

Check COM Port:
Press Win + X, select Device Manager, and expand Ports to find COM9.
Reconnect ESP32:
Unplug the ESP32 from the USB port and plug it back in to refresh the connection.

Step 6: Troubleshooting
If you see an error message like PermissionError(13, 'Access is denied.', None, 5), consider the following:
Close Other Applications: Ensure that no other applications (like the Arduino IDE or serial monitor) are using the COM port. Close any such applications and try running the Python script again.

Step 7: Test the Buttons
Press the buttons connected to the ESP32. Each button press should trigger the corresponding keyboard action as defined in your Python script.



Setting Up ESP32 Button Command

Step 1: Gather Materials
ESP32-Wroom32 development board
Three push buttons
Three 10k ohm resistors
Breadboard and jumper wires
USB cable for connecting the ESP32 to your computer

Step 2: Wiring the Buttons with Pull-Up Resistors
Connect the Buttons:
- Button 1 (to GPIO 12):
Connect one terminal of Button 1 to GPIO 12 on the ESP32.
Connect the other terminal to GND.
Connect a 10k ohm resistor between GPIO 12 .
- Button 2 (to GPIO 13):
Connect one terminal of Button 2 to GPIO 13 on the ESP32.
Connect the other terminal to GND.
Connect a 10k ohm resistor between GPIO 13.
- Button 3 (to GPIO 14):
Connect one terminal of Button 3 to GPIO 14 on the ESP32.
Connect the other terminal to GND.
Connect a 10k ohm resistor between GPIO 14.
