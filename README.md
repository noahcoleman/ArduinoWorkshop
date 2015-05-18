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


Intro to Arduino IDE and programming
- Run, Upload, Serial Monitor buttons
- What is a sketch?
- void setup()
- runs once when program begins
- void loop()
- runs over and over again as long as it has power
- Uploading a sketch
Lets make it do something!
- Blink sketch- light up an led
- Fade an led
- Use a digital input (button) to control some aspect of code
- Use an analog input (pot) to control some aspect of code

## Links
[Official Arduino website.][1]

[Walkthrough tutorials][2] of the basic example sketches included in the Arduino IDE.

[Arduino Playground][3], a wiki of user-contributed tutorials, projects, and how-tos!


[1]: http://www.arduino.cc/
[2]: http://www.arduino.cc/en/Tutorial/HomePage
[3]: http://playground.arduino.cc/

[ecosystem]: https://github.com/noahcoleman/ArduinoWorkshop/blob/master/assets/img/Arduino-Boards.jpg "Arduino Ecosystem"
[unoAnatomy]: https://github.com/noahcoleman/ArduinoWorkshop/blob/master/assets/img/UnoMarkup.jpg "Anatomy of the Arduino Uno R3"

