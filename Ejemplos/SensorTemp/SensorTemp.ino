///////////////////
// BYTEK PHOENIX //
///////////////////

/*
  SensorTemp
  Prints the temperature read by the LM35 Sensor every second

  This sketch is made for the bytek phoenix board.
  If you want to know more about this board, 
  check our Github at https://github.com/bytekengineering/phoenix
  
  This example code is in the public domain.

  More info at http://bytek.info/
*/

#define SENSOR A0  //  LM35

// The NodeMCU conversor voltage: 3,3V
const int val_step = 3300/1024;

void setup() {
   Serial.begin(115200);
}

void loop() {  
  int analog_val = 0;    
  float temp = 0;       
   
  // Reading analog input
  analog_val = analogRead(SENSOR);
  
  // Convert analog value to temperature       
  temp = ( analog_val * val_step) / 10; 

  // Print the result
  Serial.print("The temperature is : " );                       
  Serial.print(temp);
  Serial.println(" C " );                       
  delay(1000);       
}
