const int pinTemp = A0;

const int B = 3975;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int val = analogRead(pinTemp);

    float resistance = (float)(1023-val)*10000/val;

    float temperature = 1/(log(resistance/10000)/B+1/298.15)-273.15;

    Serial.println(temperature);

    delay(1000);
}

