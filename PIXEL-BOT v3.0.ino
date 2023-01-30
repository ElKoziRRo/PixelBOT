// PixelBOT 4 PixelWorlds ver 3.0 ElKoziRRo////////
//////////////////////////////////////////////////
/////////////////////////////////////////////////
// Designed for events with Magic Stuff Block //
///////////////////////////////////////////////
// ------------------------------------------------ -----------------


int lewo = 2 ;
int prawo = 3 ;
int wal = 7 ;
int button = 8 ;
int buttonH = 9 ;





void  setup () {
  Serial.begin( 9600 );
  pinMode (lewo, OUTPUT);
  
  pinMode (prawo, OUTPUT);
  
  pinMode (wal, OUTPUT);
  
  pinMode (button, INPUT);
  pinMode (buttonH, OUTPUT);

}

void  loop () {

Serial.println ( " PIXEL-BOT v3.0" );
Serial.println ( " init..." );

digitalWrite (lewo, LOW);
digitalWrite (prawo, LOW);
digitalWrite (wal, LOW);

digitalWrite (buttonH, LOW);

Serial.println ( " POWER RE-READY" );
delay(2000);


Serial.println ( " ... STARTED" );
Serial.println ( " <---LEFT-WAY-" );
digitalWrite (lewo, HIGH);
digitalWrite (wal, HIGH);
digitalWrite (buttonH, HIGH);
delay(65000);
Serial.println ( " -RIGHT-WAY---->" );
digitalWrite (lewo, LOW);
digitalWrite (prawo, HIGH);
delay(65000);
  Serial.println ( " ...next cycle - NOW! " );
  Serial.println ( "REBOOT" );
  delay( 1000 );
}
