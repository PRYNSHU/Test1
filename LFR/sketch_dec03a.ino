//reading touch sensor value and doing some cool things 
int a,touch=14;
void setup() {
Serial.begin(115200);
delay(2000);
Serial.println("test1");
pinMode(touch,OUTPUT);
pinMode(2,OUTPUT);
}

void loop() {
a= touchRead(touch);
Serial.println(a);
if(a<30){
  digitalWrite(2,HIGH);
 Serial.println(" - LED on");
}
  else{
 digitalWrite(2, LOW);
 Serial.println(" - LED off");
}
delay(500);
}
