//PixelBOT  4  PixelWorlds Kukouri
//
//
//dev & created by ElKoziRRo
//
//-----------------------------------------------------------------


int lewo = 2;
int prawo = 3;
int wal = 7;
int button = 8;
int buttonH = 9;





void setup() {
  Serial.begin(9600);
  pinMode(lewo,OUTPUT);
  
  pinMode(prawo,OUTPUT);
  
  pinMode(wal,OUTPUT);
  
  pinMode(button,INPUT);
  pinMode(buttonH,OUTPUT);

}

void loop() {

digitalWrite(lewo, HIGH);
digitalWrite(prawo, HIGH);
digitalWrite(wal, HIGH);

digitalWrite(buttonH, HIGH);

if(button == HIGH)
{
  Serial.println("Przycisk EKSPA-ZAGŁADY Wjebano");
  digitalWrite(wal,LOW);
  delay(300); //3sekundy
  Serial.println("3 ....  ");
    delay(1000); 
  Serial.println("2 .....");
    delay(1000); 
  Serial.println("1 ......");
    delay(1000); 
  Serial.println(" . . . PixelBOT START");
  delay(100);
  Serial.println(" . . . 4560 KOCKÓW ---> WYMIARY SWIATA 80x57 czyli 28 i poł sekwencji");
  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja1");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja2");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja3");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja4");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja5");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja6");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja7");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja8");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja9");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja10");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja11");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja12");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja13");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja14");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja15");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja16");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja17");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja18");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja19");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja20");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja21");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja22");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja23");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja24");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja25");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja26");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja27");  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);
  digitalWrite(prawo,LOW);
  delay(225000);
  digitalWrite(prawo,HIGH);
  delay(100);
  Serial.println(" . . . sekwencja28");  
  
  digitalWrite(lewo,LOW);
  delay(225000);
  digitalWrite(lewo,HIGH);
  delay(100);

  Serial.println(" . . . . . . . . . . . . . . . . . .");
  Serial.println(" K O N I E C      E K S P I E N I A "); 

  
  }

  

}
