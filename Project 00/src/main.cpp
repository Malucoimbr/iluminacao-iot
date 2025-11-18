#include <Arduino.h>

// Pines
const int ldrPin = 33;   // Entrada analógica (LDR)
const int ledPin = 14;   // LED

// Ajuste este valor depois de testar a luminosidade
int limiar = 2000;   // Quanto maior, mais sensível à falta de luz

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  pinMode(ldrPin, INPUT);
}

void loop() {
  int valor = analogRead(ldrPin);  // Lê de 0 a 4095

  Serial.print("Valor LDR: ");
  Serial.println(valor);

  if (valor > limiar) { 
    // Sala escura → valor alto → acender LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Sala clara → valor baixo → apagar LED
    digitalWrite(ledPin, LOW);
  }

  delay(300);
}