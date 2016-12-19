int ledPin[6] = {3, 5, 6, 9, 10, 11};

int Count = 0;
int iCount = 0;
int sensor;
int brightness = 0;
bool on = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < 6; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  sensor = analogRead(A0);
  Serial.println(sensor);
  if (sensor > 550) {
    on = true;
  } else {
    on = false;
  }
  if (on == true) {
    for (int i = 0; i < 255; i += 1) {
      analogWrite(ledPin[0], i);
      analogWrite(ledPin[1], i);
      analogWrite(ledPin[2], i);
      analogWrite(ledPin[3], i);
      analogWrite(ledPin[4], i);
      analogWrite(ledPin[5], i);
      delay(5);
    }
    delay(4000);
    for (int i = 255; i > 0; i -= 1) {
      analogWrite(ledPin[0], i);
      analogWrite(ledPin[1], i);
      analogWrite(ledPin[2], i);
      analogWrite(ledPßin[3], i);
      analogWrite(ledPin[4], i);
      analogWrite(ledPin[5], i);
      delay(5);
      Serial.println(i);
    }
    analogWrite(ledPin[0],0);
    analogWrite(ledPin[1],0);
    analogWrite(ledPin[2],0);
    analogWrite(ledPin[3],0);
    analogWrite(ledPin[4],0);
    analogWrite(ledPin[5],0);
  }
  Serial.println(brightness);

  //  analogWrite(ledPin[iCount], brightness);
  //  digitalWrite(ledPin[Count], HIGH);
  //  digitalWrite(ledPin[iCount], LOW);
  delay(50);
}
