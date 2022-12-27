#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *dosya;
	int stok;
	char urunismi[50][15];
	char urunUlke[50][15];
	int i = 0;
	if((dosya = fopen("D:\\C Ders\\dosya›slemleri dersi\\okumadosyasi.txt","r"))!= NULL){
		
		while(!feof(dosya)){
			//fflush(stdin);
			fscanf(dosya,"%s",&urunismi[i]);
			fscanf(dosya,"%d",&stok);
			fscanf(dosya,"%s",&urunUlke[i]);
			printf("%s//%d//%s\n",urunismi[i],stok,urunUlke[i]);
			i++;
		}
	
	
	}else{
		printf("aradiginiz dosya sistemde bulunamadi...\n");
	}
	fclose(dosya);
	
	//EOF = dosyanin son karakteri
	//FEOF = karakter dizilerinin son karakteri
	return 0;
}
