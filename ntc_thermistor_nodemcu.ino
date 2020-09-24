/*
CoronaSecure - The COVID-19 Healthband
Made by - Arijit Das (https://github.com/arijit123student)
Copyright - GPL V3.0 Licensed
Don't forget to credit the author or else you will terminate the Open-Source license rules.
Do leave out about any issues you are facing in this GitHub repository. We would be happy to solve.
Contact the author - 
E-mail : https://mailtoarijitdas18022006@gmail.com
Twitter: https://twitter.com/Arijit_Student
GitHub : https://github.com/arijitdas123student
*/

#include <math.h>

unsigned int Rs = 150000;
double Vcc = 3.3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(Thermister(AnalogRead()));
  delay(1000);

}

int AnalogRead() {
  int val = 0;
  for(int i = 0; i < 20; i++) {
    val += analogRead(A0);
    delay(1);
  }

  val = val / 20;
  return val;
}

double Thermister(int val) {
  double V_NTC = (double)val / 1024;
  double R_NTC = (Rs * V_NTC) / (Vcc - V_NTC);
  R_NTC = log(R_NTC);
  double Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * R_NTC * R_NTC ))* R_NTC );
  Temp = Temp - 273.15;         
  return Temp;

}
