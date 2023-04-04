// C++ code
// Definir os pinos dos motores
int motorEsquerdoPin1 = 2;
int motorEsquerdoPin2 = 3;
int motorDireitoPin1 = 4;
int motorDireitoPin2 = 5;

// Definir os pinos dos botões
int botaoEsquerda = 6;
int botaoDireita = 7;
int botaoFrente = 8;
int botaoTras = 9;

// Definir os pinos do sensor e do atuador
int sensorPin = 10;
int atuadorPin = 11;

void setup() {
  // Configurar os pinos dos motores como saídas
  pinMode(motorEsquerdoPin1, OUTPUT);
  pinMode(motorEsquerdoPin2, OUTPUT);
  pinMode(motorDireitoPin1, OUTPUT);
  pinMode(motorDireitoPin2, OUTPUT);

  // Configurar os pinos dos botões como entradas
  pinMode(botaoEsquerda, INPUT);
  pinMode(botaoDireita, INPUT);
  pinMode(botaoFrente, INPUT);
  pinMode(botaoTras, INPUT);

  // Configurar o pino do sensor como entrada e do atuador como saída
  pinMode(sensorPin, INPUT);
  pinMode(atuadorPin, OUTPUT);
}

void loop() {
  // Ler o estado dos botões e ajustar a velocidade dos motores
  int esquerda = digitalRead(botaoEsquerda);
  int direita = digitalRead(botaoDireita);
  int frente = digitalRead(botaoFrente);
  int tras = digitalRead(botaoTras);

  if (esquerda == HIGH) {
    // Mover para a esquerda
    digitalWrite(motorEsquerdoPin1, LOW);
    digitalWrite(motorEsquerdoPin2, HIGH);
    digitalWrite(motorDireitoPin1, HIGH);
    digitalWrite(motorDireitoPin2, LOW);
  } else if (direita == HIGH) {
    // Mover para a direita
    digitalWrite(motorEsquerdoPin1, HIGH);
    digitalWrite(motorEsquerdoPin2, LOW);
    digitalWrite(motorDireitoPin1, LOW);
    digitalWrite(motorDireitoPin2, HIGH);
  } else if (frente == HIGH) {
    // Mover para frente
    digitalWrite(motorEsquerdoPin1, HIGH);
    digitalWrite(motorEsquerdoPin2, LOW);
    digitalWrite(motorDireitoPin1, HIGH);
    digitalWrite(motorDireitoPin2, LOW);
  } else if (tras == HIGH) {
    // Mover para trás
    digitalWrite(motorEsquerdoPin1, LOW);
    digitalWrite(motorEsquerdoPin2, HIGH);
    digitalWrite(motorDireitoPin1, LOW);
    digitalWrite(motorDireitoPin2, HIGH);
  } else {
    // Parar
    digitalWrite(motorEsquerdoPin1, LOW);
    digitalWrite(motorEsquerdoPin2, LOW);
    digitalWrite(motorDireitoPin1, LOW);
    digitalWrite(motorDireitoPin2, LOW);
  }

  // Verificar a distância do sensor
  int distancia = analogRead(sensorPin);
  if (distancia <= 15) {
    // Ativar o atuador
    digitalWrite(atuadorPin, HIGH);
  } else {
    // Desativar o atuador
    digitalWrite(atuadorPin, LOW);
  }
}
