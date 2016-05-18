int cek_tombol()
{
	while(1)
	{
		if(TOMBOL_1){
			lcd.clear();
			return 1; 
		}
		if(TOMBOL_0){
			lcd.clear();
			return 0;
		}
		if(TOMBOL_2){
			lcd.clear();
			return 2; 
		}
		if(TOMBOL_3){
			lcd.clear();
			return 3; 
		}
		if(TOMBOL_4){
			lcd.clear();
			return 4; 
		}
		if(TOMBOL_5){
			lcd.clear();
			return 5; 
		}
		if(TOMBOL_6){
			lcd.clear();
			return 6; 
		}
		if(TOMBOL_7){
			lcd.clear();
			return 7; 
		}
		if(TOMBOL_8){
			lcd.clear();
			return 8; 
		}
		if(TOMBOL_9){
			lcd.clear();
			return 9; 
		}
		if(ENTER){
			lcd.clear();
			return 0000; 
		}

	}
}

void cek()
{
	while(1)
	{
		int xx=cek_tombol();
		tampilLcd(0,0, "%5d", xx);
	}
}