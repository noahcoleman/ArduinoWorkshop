# Arduino Workshop

## What is Arduino?
From the [Arduino Website:](http://www.arduino.cc/en/Guide/Introduction)
> Arduino is a tool for making computers that can sense and control more of the physical world than your desktop computer. 

Arduino is a great way to integrate physical inputs and outputs into your code-based project.  It can be used both as a standalone device and in conjunction with more powerful computers, like your laptop.

> It's an open-source physical computing platform

Arduino uses both open-source software and open-source hardware.  Anyone can look up the specs and build an Arduino microcontroller from its discreet parts.  Additionally, any user can see the all the specs of the Arduino software (or hardware) and contribute improvements or innovations.  As a result, the community is very open, helpful, and enthusiastic!

> based on a simple microcontroller board, and a development environment for writing software for the board.

*Arduino* refers to both the board as well as the development environment where the code is written.

One thing I love about Arduino is that it has evolved to become a whole ecosystem with niche hardware for specific needs such as wearables, very small form factors, projects with a larger number of inputs/outputs, kids, DIYers, wireless communication, etc.
![alt text][ecosystem]

##Anatomy Lesson
Here's a picture of the most common Arduino board, the Uno.  Note the location of the following:
- USB port
- Power connection
- Power pins
- Analog input pins
- Digital input and output pins
![alt text][unoAnatomy]

##Physical Computing
As I said, Arduino is a great way to add physical inputs and outputs to your code-based project.  Inputs can be human-manipulated things like buttons, knobs, or controllers as well as sensors that detect temperature, motion, distance, etc.  Outputs can be lights, sounds, movements, pop-ups, opening a file or program, etc.  The possibilities are pretty much endless.

###A Discussion of Digital vs. Analog
Inputs as well as outputs are divided into two broad classes: *digital* and *analog*.  Digital simply means that the signal is either **on** or **off**.  That's it.  No middle ground, no questions asked.  Examples of digital inputs include buttons, electrical connections, and motion sensors.  Outputs could be turning a light on or off (more on that later), playing or stopping a sound, etc.
Analog signals, on the other hand, represent a **range** of values along a scale.  Analog inputs could be a knob or slider, a light sensor, or a distance sensor.  Outputs could be the *dimming* of a light, volume of a sound, or speed of a motor.  
Some sensors are more complicated than being simply digital or analog, but these are two very broad categories that are useful for describing innumberable situations.

##Shields
Manufacturers have created add-on boards called *shields* that extend Arduino's capabilities for a specific purpose.  You can do without the shield, but often it is much more convenient and practical to use a shield, especially if you don't have the electronics experience to build what you need from scratch.  There are motor shields, SD card shields, ethernet shields, and LED matrix shields, just to name a few.

##Intro to Arduino IDE and programming
- Run, Upload, Serial Monitor buttons
To program the microcontroller, we need to write some code and upload it to the chip.  We do this with the Arduino IDE (Integrated Development Environment) on our computer.  When we open up the Arduino IDE, we will see a window similar to this:
![alt text][arduinoIDE]

We'll talk about each of these items in turn.

`void setup()`
- This is where we put code to set up our sketch.
- This code only runs once when the program begins.

`void loop()`
- This code runs over and over again as long as the Arduino has power.
- Usually, this is where we put most of our code.

###Lets make it do something!
####Blink sketch
This is the default sketch that comes loaded on Arduinos.  If you pull your Arduino out of the box and give it power, you will see an LED blink for 1 second on, one second off.
s
```javascript
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}```
We can change the code to change the rate of blinking.
####More fun sketches
- Turn on LED with a button
- Turn your Arduino into K.I.T.T. from Knight Rider
- Fade an LED on and off with code
- Fade an LED with a potentiometer
- Change the color of an RGB LED
- Move a servo with a potentiometer
- Use a digital input to control some aspect of code
- Use an analog input to control some aspect of code
- Control something on your Arduino from your computer using serial communication
- Control something on your computer from your Arduino using serial communication

## Links
[Official Arduino website.][1]

[Walkthrough tutorials][2] of the basic example sketches included in the Arduino IDE.

[Arduino Playground][3], a wiki of user-contributed tutorials, projects, and how-tos!

[Adafruit's Learn Arduino site.][4] Chock full of helpful, well illustrated tutorials.


[1]: http://www.arduino.cc/
[2]: http://www.arduino.cc/en/Tutorial/HomePage
[3]: http://playground.arduino.cc/
[4]: https://learn.adafruit.com/category/learn-arduino
[ecosystem]: https://github.com/noahcoleman/ArduinoWorkshop/blob/master/assets/img/Arduino-Boards.jpg "Arduino Ecosystem"
[unoAnatomy]: https://github.com/noahcoleman/ArduinoWorkshop/blob/master/assets/img/UnoMarkup.jpg "Anatomy of the Arduino Uno R3"
[arduinoIDE]: https://github.com/noahcoleman/ArduinoWorkshop/blob/master/assets/img/arduinoIDE.jpg "Arduino IDE"
