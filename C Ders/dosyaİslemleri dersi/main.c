#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *dosyaninadresi;
	dosyaninadresi = fopen("D:\\C Ders\\dosya›slemleri dersi\\ramooooo.txt","w");
	
/*	fputc('k',dosyaninadresi);
	fprintf(dosyaninadresi,"\n");
	fputs("selamun aleykum adim azrail...\n",dosyaninadresi);*/
	
/*	char isim[20];
	printf("ltfen bir isim giriniz...\n");
	gets(isim);
	
	fprintf(dosyaninadresi,"benim adim %s dir\n",isim);*/
	
	int i,j;
	printf("iki sayi giriniz...\n");
	scanf("%d %d",&i,&j);
	int toplam;
	toplam = i+j;
	
	fprintf(dosyaninadresi,"girdiginiz sayilar ve toplamlari:\n%d + %d = %d",i,j,toplam);
	
	
	
	
	
	
	fclose(dosyaninadresi);
	
	
	return 0;
}
