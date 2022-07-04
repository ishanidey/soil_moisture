int msensor = A1; // moisture sensor is connected with the analog pin A1 of the Arduino
int msvalue = 0; // moisture sensor value 
int moisture_percentage = 0;

void setup() {
  Serial.begin(9600);
  pinMode(msensor, INPUT);
  
}
 
void loop() {
  msvalue = analogRead(msensor);
 moisture_percentage = ( 100 - ( (msvalue/1023.00) * 100 ) );
  Serial.println("Moisture Percentage = ");
  Serial.println(moisture_percentage);
  if(msvalue<=500){
    Serial.println("Soil is too wet");
  }
  if(msvalue>500 && msvalue<700){
    Serial.println("Soil moisture is perfect");
  }
  if(msvalue>=700){
    Serial.println("Soil is dry");
  }
 
  delay(1000);
}
