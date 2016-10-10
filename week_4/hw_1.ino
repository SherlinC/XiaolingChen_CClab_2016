int inPin = 2;
int outPin = 13;
boolean mySwitch = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(outPin, OUTPUT); //light
  pinMode(inPin, INPUT_PULLUP); //button
}

void loop() {
  // put your main code here, to run repeatedly:
  int oldBtnVal = digitalRead(inPin);
  delay(10);
  int newBtnVal = digitalRead(inPin);

  if (newBtnVal != oldBtnVal) {
    if (newBtnVal == LOW) {
      mySwitch = !mySwitch;
      Serial.println(0);
    }
  }

  if (mySwitch) digitalWrite(outPin, HIGH);
  else digitalWrite(outPin, LOW);
}
