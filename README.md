# CoronaSecure-Healthband
Virus or COVID-19 has shaken the entire world. As per https://www.worldometers.info more than 121 countries have been affected by the virus. The death toll keeps on rising in many countries whereas in some they are going down gradually. And also the death toll is now also starting to include the healthcare workers and the doctors. They are mainly getting contaminated due to close contact with positive patients.

Over here comes the need for proper isolation and proper maintenance of Social Distancing. Not only in India but also in several of the countries strict lockdowns are being practiced. This is leading to the great downfall of the cases. Thus the maintenance of the proper isolation techniques and quarantine periods are of utmost importance.

This project is a boon to all these problems. My project consists of a health band with an app named CoronaSecure. We will be able to use my device from staying inside our homes and it will be able to track very essential data such as Body Temperature, Heartbeat, SpO2 Level in Blood. These data will be then sent to our cloud servers along with this the patient will have to fill up a survey form consisting of some common symptoms of the Corona Virus as being advised from WHO. This will be continued for a Normal Quarantine Period of 14 days as being advised by WHO.

Working
The system of working of this device can be understood through the following points:

Taking data from MAX30100/MAX30105 SENSOR and NTC THERMISTOR .
Sending this data from Arduino Nano to the mobile app using ESP8266 – 01 WiFi Module.
Completion and filling up of the survey.
Sending all the data to the cloud server.
Compilation of these data and regular surveillance for 14 days.
If any chances of COVID is being found then data directly being sent to a local registered hospital along with GPS LOCATION data from the mobile.

Parts List

The following are the materials used in the project:

Arduino Nano
ESP8266-01 WiFi Module
MAX30100 Sensor
NTC Thermistor (10k)
Resistance of 10k
Jumper wires
Programming and Coding
Please download the code from GitHub Repository.

Now after the code has been put into the Arduino Nano the circuit will be connected as per the circuit diagram.

Now we need to make a cloud server and platform where the database will be created and Data will be collected.

You can access our survey questions that will be updated everyday.

Final Working
Finally, after connecting it to our app made using MIT APP INVENTOR in our mobile we will get to see that we will have to fill up a survey form and then it will be sent to the nearby registered hospital.

Proof of Concept
Note: Over here I have used NodeMCU instead of Arduino Nano. Rest all are the same. And here I have used Blynk IoT development app to read the data.


