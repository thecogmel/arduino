const byte ledTrafficRedPin = 7;
const byte ledTrafficYellowPin = 4;
const byte ledTrafficGreenPin = 2;

const byte ledPedestrianBluePin = 13;
const byte ledPedestrianGreenPin = 12;

const byte buttonPin = 8;

boolean trafficRequest = false;

void setup()
{
  pinMode(ledTrafficRedPin, OUTPUT);
  pinMode(ledTrafficYellowPin, OUTPUT);
  pinMode(ledTrafficGreenPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void resetTrafficLight()
{
  digitalWrite(ledTrafficRedPin, LOW);
  digitalWrite(ledTrafficYellowPin, LOW);
  digitalWrite(ledTrafficGreenPin, LOW);
  digitalWrite(ledPedestrianBluePin, LOW);
  digitalWrite(ledPedestrianGreenPin, LOW);
}

void trafficLightOn()
{
  digitalWrite(ledTrafficGreenPin, HIGH);
  digitalWrite(ledPedestrianBluePin, HIGH);
}

void trafficLightOff()
{

  delay(3000);
  digitalWrite(ledTrafficGreenPin, LOW);
  digitalWrite(ledTrafficYellowPin, HIGH);
  delay(2000);

  digitalWrite(ledTrafficYellowPin, LOW);
  digitalWrite(ledPedestrianBluePin, LOW);
  digitalWrite(ledTrafficRedPin, HIGH);
  digitalWrite(ledPedestrianGreenPin, HIGH);

  delay(5000);
  for (int i = 0; i < 10; i++)
  {
    digitalWrite(ledPedestrianGreenPin, LOW);
    delay(500);
    digitalWrite(ledPedestrianGreenPin, HIGH);
    delay(500);
  }
  resetTrafficLight();
}

void loop()
{
  trafficRequest = digitalRead(buttonPin);
  switch (trafficRequest)
  {
  case HIGH:
  {
    trafficLightOff();
    break;
  }
  case LOW:
  {
    trafficLightOn();
    break;
  }
  }
}
