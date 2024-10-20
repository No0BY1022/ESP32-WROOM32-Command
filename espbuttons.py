#Dont have ESP32-S2 or ESP32-S3?
#Using ESP32-Wroom32 command keys
#Made by DontWipe
#Dont change button name 
import serial
import pyautogui
import time

ser = serial.Serial('COM9', 115200, timeout=1)  

def perform_action(command):
    if command == "button1": #btn1
        pyautogui.hotkey('ctrl', 'c')  #you can change the short cut key
        print("button1 pressed")
    elif command == "button2": #btn2
        pyautogui.hotkey('ctrl', 'v')  #you can change the short cut key
        print("button2 pressed")
    elif command == "button3": #btn3
        pyautogui.hotkey('win', 'd')  #you can change the short cut key
        print("button3 pressed")

time.sleep(2) 

while True:
    if ser.in_waiting > 0:
        command = ser.readline().decode('utf-8').strip()
        perform_action(command)
