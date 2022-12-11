const int button = 2;
const int LED = 27;  

void setup() {
  Serial.begin(115200);
  pinMode(button, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  int val = digitalRead(button);
  if (val == HIGH) {
    digitalWrite(27, HIGH);
    Serial.println(val);
  } else {
    digitalWrite(27, LOW);
    Serial.println(val);
  }

}
