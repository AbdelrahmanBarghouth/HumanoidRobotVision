import RPi.GPIO as GPIO
import os, time
GPIO.setmode(GPIO.BOARD)
GPIO.setup(11, GPIO.IN)
GPIO.setup(12, GPIO.IN)
GPIO.setup(13, GPIO.OUT)

os.system("echo 'Hi my name is neoamelo, I am a huamnoid robot, I will help you to like studying biology by playing with you this game' | festival --tts ")
if(GPIO.input(11) ==0):
	if(GPIO.input(12) ==0):
		os.system("sudo python welcoming.py --cascade=face.xml 0")
	if(GPIO.input(12) ==1):
		os.system("/home/pi/mygamecodes/objectdetection/./compare")
if(GPIO.input(11) ==1):
	if(GPIO.input(12) == 0):
		os.system("echo 'Congratulations you finished the game, now dance with me' |festival --tts")
	if(GPIO.input(12) == 1):
