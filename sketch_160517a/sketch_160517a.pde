import processing.serial.*;

Serial myPort;
String val;

void setup(){
  String portName = Serial.list()[4];
  myPort = new Serial(this, portName, 6900);
}
void draw(){
  if ( myPort.available() > 0) 
  {  // If data is available,
  val = myPort.readStringUntil('\n');         // read it and store it in val
  } 
println(val);
}