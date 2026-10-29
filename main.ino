const int trigPin = 9;
const int echoPin = 8;

const int ledMovimiento = 12;
const int ledLibre = 13;

const int distanciaUmbral = 15;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(ledMovimiento, OUTPUT);
  pinMode(ledLibre, OUTPUT);

  Serial.begin(9600);
 digitalWrite(ledMovimiento, LOW);
  digitalWrite(ledLibre, HIGH);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long duracion = pulseIn(echoPin, HIGH, 30000);

  int distancia = duracion * 0.034 / 2;

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  if (distancia > 0 && distancia < distanciaUmbral) {

    digitalWrite(ledMovimiento, HIGH);
    digitalWrite(ledLibre, LOW);

  } else {

    digitalWrite(ledMovimiento, LOW);
    digitalWrite(ledLibre, HIGH);
  }

  delay(100);
}

