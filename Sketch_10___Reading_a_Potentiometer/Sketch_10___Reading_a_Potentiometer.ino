const int POT = A0;
const int led = A1;

int val = 0;

void setup() {
pinMode(led, OUTPUT);
pinMode(POT, INPUT);
}

void loop() {
  
int val = analogRead(POT);
int ledval = map(val, 0, 4095, 0, 255);

analogWrite(led, ledval);

delay(200);
}

