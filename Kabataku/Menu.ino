void menuUtama()
{
  while(1)
  {
    tampilLcd(0,0,"    KABATAKU    ");
    if(tab==1){delay(100);tampilLcd(0,1,"    HITUNGAN    ");}
    if(tab==2){delay(100);tampilLcd(0,1,"   LAGU DAERAH  ");}
    if(tab==3){delay(100);tampilLcd(0,1,"     CEK ADC    ");}
    if(ENTER&&tab==1){delay(100); lcd.clear(); menuHitungan();}
    if(ENTER&&tab==2){delay(100); lcd.clear();lagu_daerah();}
    if(ENTER&&tab==3){delay(100); lcd.clear();cek_adc();}
    if(NEXT){delay(100);tab++;}
    if(BACK){delay(100);tab--;}
    if(tab==4){tab=1;}
    if(tab==0){tab=3;}
  }
}

void menuHitungan()
{
  delay(10);
  char tab1=1;
  while(1)
  {
    if(tab1==1){delay(100);tampilLcd(0,0,"     LEVEL 1    ");}
    if(tab1==2){delay(100);tampilLcd(0,0,"     LEVEL 2    ");}
    if(tab1==3){delay(100);tampilLcd(0,0,"     LEVEL 3    ");}
    if(tab1==4){delay(100);tampilLcd(0,0,"     LEVEL 4    ");}
    if(ENTER && tab1==1){delay(100); lcd.clear();level_1();}
  /*  if(ENTER&&tab==1){level_2();}
    if(ENTER&&tab==2){level_3();}
    if(ENTER&&tab==3){level_4();}*/
    if(NEXT){delay(100);tab1++;}
    if(BACK){delay(100);tab1--;}
    if(tab1==5){tab1=1;}
    if(tab1==0){tab1=4;}
    if(EXIT)break;
  }
}

void level_1()
{  
  while(1)
  {  
    long i = 0;   
    long terpilih[3]={4, 4, 4};
    sini:
    long a = random(0,3);
    tampilLcd(0,0," Nilai a: %1d ", a);
    delay(4000);
    for( int x=0; x<3; x++) 
    {

      lcd.clear();
      tampilLcd(0,0," Terpilih: %1d ", terpilih[x]);
      delay(4000);
      if( a == terpilih[x] ) goto sini; 
    }

    switch(a)
      {

        case 0:
          lagu.play("1tambah1.wav");
          tampilLcd(0,1,"      1+1 ?     ");
          delay(10);
          while(1)
          {
            //tampilLcd(0,0,"  ADC: %4d  ", analogRead(A0));
            if( TOMBOL_2) break;
            if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_4 || TOMBOL_5 || TOMBOL_6 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
          }
        lagu.play("benar.wav");
      //if(jawaban[0]==2){lagu.play("benar.wav");}
        delay(4000);
        terpilih[i]=0;
        i++;
        lcd.clear();
        break;

        case 1:
          lagu.play("2tambah2.wav");
          tampilLcd(0,1,"      2+2 ?     ");
          delay(10);
          while(1)
          {
            //tampilLcd(0,0,"  ADC: %4d  ", analogRead(A0));
            if( TOMBOL_4) break;
            if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_5 || TOMBOL_6 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
          }
        lagu.play("benar.wav");
      //if(jawaban[0]==2){lagu.play("benar.wav");}
        delay(4000);
        terpilih[i]=1;
        i++;
        lcd.clear();
        break;

        case 2:
          lagu.play("1tambah4.wav");
          tampilLcd(0,1,"      1+4 ?     ");
          delay(10);
          while(1)
          {
            //tampilLcd(0,0,"  ADC: %4d  ", analogRead(A0));
            if( TOMBOL_5) break;
            if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_6 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
          }
        lagu.play("benar.wav");
      //if(jawaban[0]==2){lagu.play("benar.wav");}
        delay(4000);
        terpilih[i]=2;
        i++;
        lcd.clear();
        break;
      }
      if(EXIT) break;
  }
}

void lagu_daerah()
{
  lcd.clear();

  while(1)
  {
    if(TOMBOL_0){delay(100);lcd.clear();tampilLcd(0,0," AYAM DEN LAPEH ");lagu.play("lagu0.wav");}
    if(TOMBOL_1){delay(100);lcd.clear();tampilLcd(0,0,"  KAMPUANG NAN  ");tampilLcd(0,1," JAUAH DI MATO  ");lagu.play("lagu1.wav");}
    if(TOMBOL_2){delay(100);lcd.clear();tampilLcd(0,0,"  MANUK DADALI  ");lagu.play("lagu2.wav");}
    if(TOMBOL_3){delay(100);lcd.clear();tampilLcd(0,0,"  CUBLAK CUBLAK ");tampilLcd(0,1,"     SUWENG     ");lagu.play("lagu3.wav");}
    if(TOMBOL_4){delay(100);lcd.clear();tampilLcd(0,0,"   AMPAR AMPAR  ");tampilLcd(0,1,"     PISANG     ");lagu.play("lagu4.wav");}
    if(TOMBOL_5){delay(100);lcd.clear();tampilLcd(0,0,"   SI PATOKAAN  ");lagu.play("lagu5.wav");}
    if(TOMBOL_6){delay(100);lcd.clear();tampilLcd(0,0,"    HELA HELA   ");tampilLcd(0,1,"      ROTAN     ");lagu.play("lagu6.wav");}
    if(TOMBOL_7){delay(100);lcd.clear();tampilLcd(0,0,"  RASA SAYANGE  ");lagu.play("lagu7.wav");}
    if(TOMBOL_8){delay(100);lcd.clear();tampilLcd(0,0,"     SAJOJO     ");lagu.play("lagu8.wav");}
    if(TOMBOL_9){delay(100);lcd.clear();tampilLcd(0,0,"   YAMKO RAMBE  ");tampilLcd(0,1,"      YAMKO     ");lagu.play("lagu9.wav");}

    if(EXIT)
    {
      lagu.stopPlayback();
      break;
    }
  }
}

void cek_adc()
{
  lcd.clear();
  while(1)
  {
    int val_0 = analogRead(A0);
    //int val_1 = analogRead(A1);

    delay(100);tampilLcd(0,0," A0: %3d ", val_0);
    //tampilLcd(0,1," A1: %3d ", val_1);

    if( EXIT ) break;
  }
}



