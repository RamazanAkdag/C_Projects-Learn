#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// N DEFA YAZD›RMA
/*	int n,i=0;
	char cumle[100];
	FILE *ramo;
	printf("kac kere yazdiracaksiniz?\n");
	scanf("%d",&n);
	printf("ne yazdiracaksiniz?\n");
	fflush(stdin);
	gets(cumle);
	
	ramo = fopen("D:\\C Ders\\dosya›slemleri dersi\\ntaneveriyazdirma.txt","w");
	
	while(i<n){
		fprintf(ramo,"%s\n",cumle);
		i++;
		
		fclose(ramo);
	}*/
	
	// DOSYAY› KARAKTER KARAKTER KONSOLA YAZD›RMA
/*	FILE *ramo;
	int i=0;
	char sea[200];
	ramo = fopen("D:\\C Ders\\dosya›slemleri dersi\\ntaneveriyazdirma.txt","r");
	
    do{
    	fscanf(ramo,"%c",&sea[i]);
    	printf("%c",sea[i]);
    	i++;
    	
	} while(!feof(ramo));
	
	fclose(ramo);
		*/
	
	//DOSYADAN SAT›RLA B›LG› ALMA
/*	FILE *ramo;
	char kukuli[300],*kar;
	ramo = fopen("D:\\C Ders\\dosya›slemleri dersi\\ntaneveriyazdirma.txt","r");
	
	while(!feof(ramo)){
		do{
			kar = fgets(kukuli,100,ramo);
			if(kar != NULL){
				printf("%s",kukuli);
			}
		}while(kar != NULL);
	
	}
	fclose(ramo);*/
	
	//TEK «›FT SAY›LAR› DOSYAYA YAZMA VE OKUMA
/*	int i,dizi[100];
	FILE *ramo;
	ramo = fopen("D:\\C Ders\\dosya›slemleri dersi\\ntaneveriyazdirma.txt","w");
	for(i=1;i<=100;i++){
		fprintf(ramo,"%d\n",i);
	}
		fclose(ramo);
			ramo = fopen("D:\\C Ders\\dosya›slemleri dersi\\ntaneveriyazdirma.txt","r");
	i=0;
	printf("dosyamizda  bulunan cift sayilar: \n");
	while(!feof(ramo)){
	
		fscanf(ramo,"%d",&dizi[i]);
		if(dizi[i]%2 == 0){
			printf("%d\n",dizi[i]);
			
		}
		i++;
	}*/
	//KULAN›C›N›N CUMLES›N› karakter karakter YAZD›RMA
/*	FILE *ramo;
	char tumce[200],*p1;
	p1 = tumce;
	ramo = fopen("D:\\C Ders\\dosya›slemleri dersi\\ntaneveriyazdirma.txt","w");
	printf("lutfen dosyaya yazdirmak istediginiz cumleyi giriniz...\n");
	gets(tumce);
	
	for(;*p1;p1++){
		fprintf(ramo,"%c",*p1);
	}
	*/
	//
	
	
	return 0;
}
