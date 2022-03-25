int x;
void setup() {
 
 Serial.begin(9600);
 Serial.setTimeout(1);

}

void loop() {
  while (!Serial.available());
 x = Serial.readString().toInt();
 if (x==1)
 {
 Serial.println("Face Detected");//Put code here for any actuators
 }
 else if(x!=1)
 {
  Serial.println("Face not detected");//put code here to shut down any actuators;
 }
  
}
