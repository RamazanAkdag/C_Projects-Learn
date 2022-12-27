#include <stdio.h>
#include <stdlib.h>
float hesapla(int dizi[]){
	int j,enk,enb;
	float toplam = 0;
	enk = dizi[0];
	for(j=0;j<10;j++){
			
		if(dizi[j]<enk){
			enk = dizi[j];
		}
	}
	enk = 0;
		enb = dizi[0];
	for(j=0;j<10;j++){
		if(dizi[j]>enb){
			enb = dizi[j];
		}
	}
	enb = 0;
	for(j=0;j<10;j++){
		toplam += dizi[j];
	}
	return toplam/8;
}
	//using the console pauser or add your own getch, system("pause") or input loop */
struct patenci{
	char isim[20];
	char soyAd[20];
	int hakemPuanlari[10];
	float puan;
};

int main(int argc, char *argv[]) {
	 printf("yarismacinin isim ve soyismini giriniz...\n");
	 struct patenci ramo;
	 gets(ramo.isim);
	 gets(ramo.soyAd);
	 int i;
	 for(i=0;i<10;i++){
	 	printf("%d. hakemin puanini giriniz...(1-6)\n",i+1);
	 	scanf("%d",&ramo.hakemPuanlari[i]);
	 	if(ramo.hakemPuanlari[i]<1 || ramo.hakemPuanlari[i]>6){
		 
	 		printf("yanlis aralikta puan girdiniz...\n");
	 		return 0;
	 	}
	 }
	ramo.puan =  hesapla(ramo.hakemPuanlari);
	printf("%s %s isimli sporcumuzun puani : %f",ramo.isim,ramo.soyAd,ramo.puan);
	 
	return 0;
}
