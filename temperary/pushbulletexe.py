import time
import os

print('Motion detected')
os.system('/home/pi/temperary/pushbulletexe.sh "Your Baby\'s temperature is very high!"')
time.sleep(2)
