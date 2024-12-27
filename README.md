# AVR-programming
in this repo, we shared our university project which is AVR atmega16A programming.
This is our chosen project in Principles of Computer Systems at Golestan University.
Our hex and C codes are in the Codes directory but note that our hex are specific to atemga16a CPU and may not work on your CPU.
We done simple thing like LED blinking, 7segment displays and Dotmatrix displays. we had not so much time because we done this project near the end of semester and also we had no guide on this road and we learned all the process by ourselves but with this repo and appropriate time you could done more colpex things.

Lets jump into our project :
1. first you should install zadig and progISP on your laptop
2. turn on AVR and connect CPU to your laptop with USB cable. note that there is button next to CPU if you see error in next steps maybe you should trun that button. that button make CPU accessable.
3. open zadig software > options > List all devices > choose USBasp > choose lib-win 32 > install driver
4. open progISP > choose your CPU type > click RD button and then you should see Read ID successfully. if not there is a problem , dont go further.
5. now you should install atmel studio and write your C codes in it.
6. if you use our codes you should do this : in atmel studio bar choose Project > properties > AVR/GNU C compiler > Symbols > add F_CPU=1000000UL
7. after you write your code :in atmel studio bar choose Build > Build solution. it will generate a hex file in output folder.
8. now you should connect you wanted ports to your wanted part of AVR with wire. there are images for every code in Codes directory, follow those pattern.
9. go to progISP > click erase button to cleen CPU > click Load Flash > chose your hex file > click Auto > call your master and say we done our project.

If there is any problem in this process that you can't solve. Just email us :
mahdigorzedin@gmail.com
Shamin.nersi@gmail.com
