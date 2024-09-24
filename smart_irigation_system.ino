
const int MotorPin=13,SensorPin=A5;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(MotorPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(SensorPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  if (voltage >= 2.5)
{
  digitalWrite(MotorPin,LOW);
}
else
{
  digitalWrite(MotorPin,HIGH);
}
Serial.print("Moisture Level:");
Serial.println(voltage);
delay(10);
}
