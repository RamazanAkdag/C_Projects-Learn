#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct ogrenci{
	int no;
	char cevaplar[10];
	int puan;
	
};
int main(int argc, char *argv[]) {
	
	char cevapAnahtari[10] = {'a','b','a','c','d','d','b','c','a','d'};
	
	int i,j;
	
	int net,yanlis;
	for(j=0;j<30;j++){
	
		net = 0;
		yanlis = 0;
	
	
	struct ogrenci ogr[30];
	printf("ogrencinin nosunu giriniz...\n");
	scanf("%d",&ogr[j].no);
	printf("%d nolu ogrencinin cevaplarini giriniz...\n",ogr[j].no);
	for(i=0;i<10;i++){
		scanf("%s",&ogr[j].cevaplar[i]);
	}
	char a = ogr[j].cevaplar[i];
	for(i=0;i<10;i++){
		if(ogr[j].cevaplar[i] == cevapAnahtari[i])
			net++;
		else if(a == 'a' || a == 'b' || a == 'c' || a == 'd')
			yanlis++;
	
		if(yanlis == 4){
			net--;
			yanlis = 0;
		
		}
	}
	ogr[j].puan = 10*net;
	printf("%d nolu ogrencinin puani : %d\n\n",ogr[j].no,ogr[j].puan);
	
}

	return 0;
}
