#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*typedef struct{
	char isim[20];
	float x_ekseni;
	float y_ekseni;
	
}nokta;*/

/*void print(nokta can[],int boy){
	int i;
	for(i=0;i<boy;i++){
		printf("nokta %d = isim : %s || x ekseni : %f || y ekseni : %f\n",i+1,can[i].isim,can[i].x_ekseni,can[i].y_ekseni);
	}
	
	
	
}*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*struct ogrenci_bilgi{
	char ad[20];
	char soyad[20];
	int No;
	int yas;
};*/
struct karmasik{
	float reel;
	float imajiner;
		
};
void topla(struct karmasik s1,struct karmasik s2){
	struct karmasik sonuc;
	sonuc.reel = s1.reel + s2.reel;
	sonuc.imajiner = s1.imajiner + s2.imajiner;
	printf("%f %f\n",sonuc.reel,sonuc.imajiner);
}
void cikar(struct karmasik s1,struct karmasik s2){
	struct karmasik sonuc;
	sonuc.reel = s1.reel - s2.reel;
	sonuc.imajiner = s1.imajiner - s2.imajiner;
	printf("%f %f\n",sonuc.reel,sonuc.imajiner);
}
int main(int argc, char *argv[]) {
/*	struct ogrenci_bilgi ogr1,ogr2;
	printf("ogrencinin adini,soyadini,numarasini ve yasini giriniz...\n");
	scanf("%s",ogr1.soyad);
	
	printf("soyadi : %s\n",ogr1.soyad);*/
/*	nokta can[3] = {{"ramazan",3,4},{"furkan",4,5},{"osi",5,6}};
	print(can,3);*/


struct karmasik s1;
s1.reel = 1.5;
s1.imajiner =2.7;

struct karmasik s2;
s2.reel = 4.2;
s2.imajiner = 5.8;

struct karmasik sonuc;
char oper;

printf("yapmak istedigin islemi gir...\n");
scanf("%c",&oper);

switch(oper){
	case '+': topla(s1,s2);break;
	case '-': cikar(s1,s2);break;
	
	}	



	return 0;
}
