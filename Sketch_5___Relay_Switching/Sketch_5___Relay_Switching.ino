Sketch 4 – Relay Switching
const int relayPin =  8;
int relayState = 0;

void setup()
{
    
    pinMode(relayPin, OUTPUT);

}

void loop()
{
    if (relayState == 0)   
    {
        digitalWrite(relayPin, HIGH);
        relayState != relayState;
    }
    else if
    {
        digitalWrite(relayPin, LOW);
        relayState != relayState;
    }
    delay(2000);
}

