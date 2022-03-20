void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop()
{
    int botao = digitalRead(3);
    digitalWrite(2, botao);
    delay(10);
}