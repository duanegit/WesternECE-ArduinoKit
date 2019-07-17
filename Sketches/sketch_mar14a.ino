
// create globals
int stepsize =5;
int offduration = 0;

void setup() {
  // put your setup code here, to run once:
 pinMode(13,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i=0; i<=25; i++)
  {
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    offduration = stepsize*i;
    Serial.println(offduration);
    delay(250+offduration);
    if ((offduration==-125 || offduration==125))
    { 
      stepsize = -stepsize;
    }
  }
}
