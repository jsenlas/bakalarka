/* Pressure Pad Sketch
 * Code inspired by adafruit.com
 */
 
 
int pressureAnalogPin = 0; //Pin where our pressure pad is located.
int pressureReading; // INT variable for storing our reading

//Adjust these if required.
//int noPressure = 5; //max value for no pressure on the pad
//int lightPressure = 100; //max value for light pressure on the pad
//int mediumPressure = 200; //max value for medium pressure on the pad
#define SIZE 800

int pole[SIZE];
 
void setup(void) {
  Serial.begin(9600);
}
   int x = 0;
   int reset = 0;

void loop(void) {
  pressureReading = analogRead(pressureAnalogPin);
  Serial.println(pressureReading);
  if (pressureReading !=0){
    //Serial.println(pressureReading);
    pole[x] = pressureReading;
    x++;
  }
  
  if (x == SIZE-1 && reset==0){
    for (int i=0; i<SIZE-1; i++){
      //Serial.println(pole[i]);  
    }
    reset++;
    
  }
/*
  if (pressureReading  != 0 && x <= 1000){
    Serial.print("Pressure Pad Reading = ");
    Serial.println(pressureReading);
    x++;
    reset++;
  }  
  else {
    reset++;
  }
  if (reset == 10000){
    Serial.println("RESET");
    x = 0;
    reset = 0;
  }
  */
  
  /*
  float voltage = pressureReading * (5.0 / 1023.0);
  Serial.print("Voltage = ");
  Serial.println(voltage);
  
  if (pressureReading < noPressure) {
    Serial.println(" - No pressure");
  } else if (pressureReading < lightPressure) {
    Serial.println(" - Light Pressure");
  } else if (pressureReading < mediumPressure) {
    Serial.println(" - Medium Pressure");
  } else{
    Serial.println(" - High Pressure");
  }
  */
  delay(1000);
}
