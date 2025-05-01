int pirPin = 2;
int led = 9;
int buzzer = 8;

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int pirValue = digitalRead(pirPin);
  Serial.print("value : ");
  Serial.println(pirValue);
  delay(200);

  if (pirValue == 1) {
    Serial.println("Terdeteksi Pergerakan");
    digitalWrite(led, HIGH);
    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }
}
