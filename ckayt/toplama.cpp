#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int toplam = 0;
	tekrar:
	int sayilar[2];
	int i;
	srand(time(0));
	for(i=0;i<2;i++){
	 	sayilar[i] = rand()%100;
	 	
	 		if(sayilar[i]<10){
	 			goto tekrar;
		 	}
	}
	for(i=0;i<2;i++){
		printf("sayi %d = %d\n\n",i+1,sayilar[i]);
	}
	
	
	
	
	int gecici;
	for(i=0;i<2;i++){
		gecici = sayilar[i]%10;
		toplam += gecici;
		sayilar[i] = sayilar[i]/10;
		toplam += sayilar[i];	
	
	}
	printf("girdiginiz iki sayinin rakamlari toplami = %d",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
