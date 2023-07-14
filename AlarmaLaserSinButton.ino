int lecturaf;
int pinBuz = 7;

void setup() {
  Serial.begin(9600);
  pinMode(pinBuz, OUTPUT);
}

void loop() {

  delay(50);

  lecturaf = analogRead(A0);
  Serial.println(lecturaf);

  if (lecturaf < 200) {
    digitalWrite(pinBuz, 0);
  } else {
    digitalWrite(pinBuz, 1);
    delay(5000);
    digitalWrite(pinBuz, 0);
    delay(100);
    digitalWrite(pinBuz, 1);
    delay(100);
    digitalWrite(pinBuz, 0);
    delay(100);
    digitalWrite(pinBuz, 1);
    delay(100);
  }
}
