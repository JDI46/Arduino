
int ledPin = 4;
int button = 7;
int val = 0;


void setup() {
    pinMode(ledPin, OUTPUT);
    pintMode(button, INPUT);



}
void loop() {
    val = digitalRead(button);
    digitalWrite(ledPin, val);

}