//=============  Include Library ==========================================================

#include <SD.h> 
#include <TMRpcm.h> 
#include <SPI.h>
#include <LiquidCrystal.h>

//=============  Define Macros ============================================================

#define SD_ChipSelectPin          10
#define PinSpeaker                6
#define NEXT                      ( !digitalRead(3) )             
#define BACK                      ( !digitalRead(5) )
#define ENTER                     ( !digitalRead(4) )
#define EXIT                      ( !digitalRead(2) )

// default 637

#define TOMBOL_0                  ( analogRead(A0)>123 && analogRead(A0)<143 )  // 132 - 133   
#define TOMBOL_1                  ( analogRead(A0)>225 && analogRead(A0)<245 )  // 235-- 236
#define TOMBOL_2                  ( analogRead(A0)>307 && analogRead(A0)<327 )  // 317
#define TOMBOL_3                  ( analogRead(A0)>429 && analogRead(A0)<440 )  // 438 -- 439
#define TOMBOL_4                  ( analogRead(A0)>474 && analogRead(A0)<495 )  // 484 -- 485
#define TOMBOL_5                  ( analogRead(A0)>514 && analogRead(A0)<534 )  // 524
#define TOMBOL_6                  ( analogRead(A0)>548 && analogRead(A0)<568 )  // 558
#define TOMBOL_7                  ( analogRead(A0)>578 && analogRead(A0)<598 )    // 588 -- 587
#define TOMBOL_8                  ( analogRead(A0)>603 && analogRead(A0)<617 )  // 613
#define TOMBOL_9                  ( analogRead(A0)<10 )  // 0
#define TOMBOL                    ( analogRead(A0)>630)

//============= Object =====================================================================

LiquidCrystal lcd (31, 33, 41, 43, 45, 47);
TMRpcm lagu;

// ============ Global Variabel Declaration ================================================

int tab=1;
void menuUtama();
void tampilLcd(uint8_t x,uint8_t y, const char* fmtstr, ...);
int jawaban[2];

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  Serial.begin(9600);
  lagu.speakerPin = PinSpeaker;
  lagu.volume(1);
  SD.begin(SD_ChipSelectPin);
  lagu.play("KaBaTaKu.wav");
  lcd.begin(16,2);
  tampilLcd(0,0,"    KABATAKU    ");
  tampilLcd(0,1,"      2016      ");
  lcd.clear();
  delay(1500);
}

//============= Main Program ===================================================================

void loop()
{
  menuUtama();
}


