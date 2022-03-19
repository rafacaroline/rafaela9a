const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int botao4 = 5;
const int botao5 = 6;
const int botao6 = 7;
const int botao7 = 8;

int var1;
int var2;
int var3;
int var4;
int var5;
int var6;
int var7;

void setup()
{

  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  pinMode(botao5, INPUT); 
  pinMode(botao6, INPUT);
  pinMode(botao7, INPUT);
  Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(botao1);
  var2 = digitalRead(botao2);
  var3 = digitalRead(botao3);
  var4 = digitalRead(botao4);
  var5 = digitalRead(botao5);
  var6 = digitalRead(botao6);
  var7 = digitalRead(botao7);
 
   if(var1){
    Serial.println("DÓ");
  }
   if(var2){
  Serial.println("RÉ");  
  }
   if(var3){
  Serial.println("MI"); 
  }
   if(var4){
  Serial.println("FA"); 
  }
   if(var5){
  Serial.println("SOL");  
  }
   if(var6){
  Serial.println("LÁ"); 
  } 
  if(var7){
  Serial.println("SI"); 
  }
}