int ledpin = 13;
int ledValue = LOW;

void setup() {
pinMode (2, INPUT);
pinMode (ledpin, OUTPUT);
}

void loop() {
    if (digitalRead(2) == HIGH) {
        ledValue = ! ledValue;
        digitalWrite(ledpin, ledValue);
    }
}


