#include <stdio.h>
#include <stdlib.h>
//#define sum(x,y) x-y
//#define inc(x) ++x
//#include "untitled.h"
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
/*	int toplam;
	toplam = 5*sum(3,5);
	printf("%d",toplam);
	*/
	
/*	char *ptr ="sinav";
	int x = 10;
	
	printf("%s\n",inc(ptr));
	printf("%d\n",inc(x));
	printf("%d",topla(3,5));
*/
/*int i,s;
	srand(time(NULL));
	for(i=0;i<5;i++){
		//srand(time(NULL));
		s = rand()%20+1;
		printf("%d\n",s);
	}*/
	int a,b,sayac=0,gamerPoint;
	srand(time(NULL));
	while(1){
		printf("devam etmek icin c ye basiniz...\n");
		char kar;
		fflush(stdin);
		scanf("%c",&kar);
		if(kar == 'c'){
		
		//	srand(time(NULL));
	a = rand()%6+1;
	b = rand()%6+1;
	
	sayac++;
	printf("tur %d nin sonuclari :%d + %d = %d\n",sayac,a,b,a+b);
	
	if(sayac==1){
		
		switch(a+b){
		case 7: printf("kazandiniz...\n");return 0;
		case 11: printf("kazandiniz...\n");return 0;
		case 2: printf("kaybettiniz...\n");return 0;
		case 3: printf("kaybettiniz...\n");return 0;
		case 12: printf("kaybettiniz...\n");return 0;
		case 4 : gamerPoint = 4;printf("oyuncunun sayisi : %d\n",gamerPoint);break;
		case 5: gamerPoint = 5 ;printf("oyuncunun sayisi : %d\n",gamerPoint);break;
		case 6: gamerPoint = 6 ;printf("oyuncunun sayisi : %d\n",gamerPoint);break;
		case 8: gamerPoint = 8 ;printf("oyuncunun sayisi : %d\n",gamerPoint);break;
		case 9 :  gamerPoint = 9 ;printf("oyuncunun sayisi : %d\n",gamerPoint);break;
		case 10: gamerPoint = 10 ;printf("oyuncunun sayisi : %d\n",gamerPoint);break;
	}
		}
		
	if(sayac>1){
		if((a+b) == gamerPoint){
			printf("kazandiniz...\n");return 0;
		}
		else if((a+b) == 7){
			printf("7 sayisi geldi. Kaybettiniz...\n");return 0;
		}
		
	}
}
}

	

	
	return 0;
}
