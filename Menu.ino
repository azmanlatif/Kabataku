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
    if(ENTER && tab1==2){delay(100); lcd.clear();level_2();}
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
    // Pertanyaan Pertama
    lagu.play("1tambah1.wav");
    tampilLcd(0,1,"      1+1 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_2) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_4 || TOMBOL_5 || TOMBOL_6 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();
    
    // Pertanyaan Kedua    
    lagu.play("2tambah2.wav");
    tampilLcd(0,1,"      2+2 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_4) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_5 || TOMBOL_6 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }
      
      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();
     
    // Pertanyaan Ketiga
    lagu.play("1tambah4.wav");
    tampilLcd(0,1,"      1+4 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_5) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_6 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();

    // Pertanyaan Keempat
    lagu.play("3tambah3.wav");
    tampilLcd(0,1,"      3+3 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_6) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_5 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();

    // Pertanyaan Kelima  
    lagu.play("1tambah5.wav");
    tampilLcd(0,1,"      1+5 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_6) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_5 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();

    // Pertanyaan Ke enam
    lagu.play("2tambah1.wav");
    tampilLcd(0,1,"      2+1 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_3) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_6 || TOMBOL_2 || TOMBOL_4 || TOMBOL_5 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();

    // Pertanyaan Ke tujuh  
    lagu.play("2tambah3.wav");
    tampilLcd(0,1,"      2+3 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_5) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_6 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();

    // Pertanyaan ke delapan
    lagu.play("2tambah5.wav");
    tampilLcd(0,1,"      2+5 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_7) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_5 || TOMBOL_6 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();

    // Pertanyaan ke Sembilan  
    lagu.play("3tambah1.wav");
    tampilLcd(0,1,"      3+1 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_4) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_6 || TOMBOL_5 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();

    lagu.play("3tambah3.wav");
    tampilLcd(0,1,"      3+3 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_6) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_5 || TOMBOL_7 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();

    // Pertanyaan ke sepuluh  
    lagu.play("3tambah4.wav");
    tampilLcd(0,1,"      3+4 ?     ");
    delay(10);
    while(1)
      {
        if( TOMBOL_7) break;
        if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_5 || TOMBOL_6 || TOMBOL_8 ||TOMBOL_9 ) { delay(50);lagu.play("CobaLagi.wav"); }
      }

      lagu.play("benar.wav");
      delay(4000);
      lcd.clear();

    if(EXIT) break;
  }
}


void level_2()
{
  while(1)
  {
    lagu.play("3tambah4.wav");
    tampilLcd(0,1,"      1+1 ?     ");
    delay(10);
    while(1)
    {
      if ( TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_7 || TOMBOL_6 || TOMBOL_8 ||TOMBOL_9 ) //jawaban salah
      {
        delay(500);
        jawaban[0]=0; tampilLcd(0,0, "%1d", jawaban[0]);
        while(1)
        {
          if(TOMBOL_0 || TOMBOL_1 || TOMBOL_2 || TOMBOL_3 || TOMBOL_4 || TOMBOL_5 || TOMBOL_6 || TOMBOL_7 ||TOMBOL_8 || TOMBOL_9) 
          {
            delay(500);
            jawaban[1]=0; tampilLcd(1,0, "%1d", jawaban[1]); break;
          }
        }
      } 
      if(TOMBOL_5)
      {
        delay(500);
        jawaban[0]=5; tampilLcd(0,0, "%1d",jawaban[0]);
        while(1)
        {
          if(TOMBOL_0 || TOMBOL_1 || TOMBOL_3 || TOMBOL_2 || TOMBOL_4 || TOMBOL_7 || TOMBOL_6 || TOMBOL_9 || TOMBOL_5) 
          {
            delay(500);
            jawaban[1]=0; tampilLcd(1,0, "%1d ", jawaban[1]); break;
          }
          if(TOMBOL_8)
          {
            delay(500);
            jawaban[1]=8; tampilLcd(1,0, "%1d", jawaban[1]); break;
          }
        }
      }

      if(TOMBOL_ENTER && jawaban[1]==8 && jawaban[0]==5){ 
        delay(500); lcd.clear(); lcd.clear(); tampilLcd(0,0, "wow benar"); break;
        }  //jika benar
      if(TOMBOL_ENTER && jawaban[0]!=5 && jawaban[1]!=8){ 
        delay(500); lagu.play("CobaLagi.wav");
        }   //jika salah 
    }
    lagu.play("benar.wav");
    delay(4000); lcd.clear();
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
    int val_1 = analogRead(A1);

    delay(100); tampilLcd(0,0," A0: %3d ", val_0);
    delay(100); tampilLcd(0,1," A1: %3d ", val_1);

    if( EXIT ) break;
  }
}


