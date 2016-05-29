int red = D0;
int green = D2;
int blue = D1;

void setup() {
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);

}

void loop() {
    int value = analogRead(A0);

    int percentage = map(value, 0, 4095, 0, 100);
    if (percentage < 33) {
        digitalWrite(green, HIGH);
        digitalWrite(red, LOW);
        digitalWrite(blue, LOW);
    }
    else if (percentage > 33 & < 66) {
        digitalWrite(green, LOW);
        digitalWrite(red, LOW);
        digitalWrite(blue, HIGH); 
    }    
    else if (percentage > 66) {
        digitalWrite(green, LOW);
        digitalWrite(red, HIGH);
        digitalWrite(blue, LOW);
    }
}

