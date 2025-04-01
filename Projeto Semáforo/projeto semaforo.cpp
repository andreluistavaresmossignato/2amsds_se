// C++ code

void setup()
{
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH); //Acende o LED vermelho no pino 13
  delay(5000); //5000 milisegundos (5 segundos) até chamar a função de baixo
  digitalWrite(13, LOW); // Apaga o LED vermelho no pino 13
  
  digitalWrite(11, HIGH); //Acende o LED verde no pino 12
  delay(5000); // 5000 milisegundos (5 segundos) até chamar a função de baixo
  digitalWrite(11, LOW); //Apaga o LED verde no pino 12
  
  digitalWrite(12, HIGH); //Acende o LED amarelo no pino 12
  delay(2000); // 2000 milisegundos (2 segundos) até chamar a função de baixo
  digitalWrite(12, LOW); //Apaga o LED amarelo no pino 12
}