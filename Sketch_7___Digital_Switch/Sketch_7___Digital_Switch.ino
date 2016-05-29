int pushbutton = 2;
int led = 13;

void setup() {
    pinMode(pushbutton, INPUT);
    pinMode(led, OUTPUT);
}

void loop() {
    int buttonstate = digitalRead(pushbutton);
    if (buttonstate == HIGH){
            digitalWrite(led, HIGH);
    }
    else {
        digitalWrite(led, LOW);
    }
    delay(100);
}


