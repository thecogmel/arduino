const byte ledTrafficRedPin = 7;
const byte ledTrafficYellowPin = 4;
const byte ledTrafficGreenPin = 2;
void setup()
{
  pinMode(ledTrafficRedPin, OUTPUT);
  pinMode(ledTrafficYellowPin, OUTPUT);
  pinMode(ledTrafficGreenPin, OUTPUT);
}

void loop()
{
  digitalWrite(ledTrafficRedPin, HIGH);
  delay(2000);

  digitalWrite(ledTrafficRedPin, LOW);
  digitalWrite(ledTrafficYellowPin, HIGH);
  delay(2000);

  digitalWrite(ledTrafficYellowPin, LOW);
  digitalWrite(ledTrafficGreenPin, HIGH);
  delay(500);

  digitalWrite(ledTrafficRedPin, LOW);
  digitalWrite(ledTrafficYellowPin, LOW);
  digitalWrite(ledTrafficGreenPin, LOW);
}
