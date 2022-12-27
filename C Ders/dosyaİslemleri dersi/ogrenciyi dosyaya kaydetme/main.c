#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *ramo;
	ramo = fopen("D:\\C Ders\\dosyaÝslemleri dersi\\Yeni klasör\\ogrencibilgi.txt","w");
	int i;
	struct ogrBilgi{
		
		char ad[50];
		int no;
		int vize,final;
		float ortalama;
	};
	
	struct ogrBilgi stds[3];
	for(i=0;i<3;i++){
		printf("ogrencinin adi nedir ? \n");
		fflush(stdin);
		gets(stds[i].ad);
		printf("nosunu giriniz...\n");
		scanf("%d",&stds[i].no);
		printf("vize ve final notlarini giriniz...\n");
		scanf("%d  %d",&stds[i].vize,&stds[i].final);
		
		stds[i].ortalama = (stds[i].vize + stds[i].final)/2;
		
	}
	for(i=0;i<3;i++){
		fprintf(ramo,"%d nolu ogrencimizin:\nadi : %s\tvize notu: %d\tfinal notu: %d\tortalamasi: %f\n\n ",stds[i].no,stds[i].ad,stds[i].vize,stds[i].final,stds[i].ortalama);
	}
	
	
	return 0;
}
