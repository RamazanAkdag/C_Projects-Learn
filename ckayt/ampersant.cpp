#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float topla(float *sayi1,float *sayi2){
		return *sayi1+*sayi2;
}
float cikar(float *sayi1,float *sayi2){
	if(*sayi1>*sayi2){
		return *sayi1 - *sayi2;
	}
	else{
		return *sayi2 - *sayi1;
	}
}
float carpma(float *sayi1,float *sayi2){
	return *sayi1 * *sayi2;
}
float bol(float *sayi1,float *sayi2){
		if(*sayi1>*sayi2){
		return *sayi1 / *sayi2;
	}
	else{
		return *sayi2 / *sayi1;
	}
}


int main()
{
	setlocale(LC_ALL,"Turkish");
	float sayi1,sayi2;
	char islem;
	printf("4 islemden 1ini seciniz...[t-c-x-b] \n");
	
	scanf("%c",&islem);
	
	if(islem=='t'){
	printf("lutfen 2 sayi giriniz...\n");
	scanf("%f%f",&sayi1,&sayi2);
	printf("%f",topla(&sayi1,&sayi2));
}
	if (islem=='c'){
		
		printf("lutfen 2 sayi giriniz...\n");
	scanf("%f%f",&sayi1,&sayi2);
		printf("%f",cikar(&sayi1,&sayi2));
	}
	if(islem=='x'){
		printf("lutfen 2 sayi giriniz...\n");
	scanf("%f%f",&sayi1,&sayi2);
		
		printf("%f",carpma(&sayi1,&sayi2));
	}
	if(islem=='b'){
		
		printf("lutfen 2 sayi giriniz...\n");
	scanf("%f%f",&sayi1,&sayi2);
		printf("%f",bol(&sayi1,&sayi2));
	}
	else{
		printf("lutfen\nt = toplama\nc = cýkarma\nx = carpma\nb = bolme\nislemlerinden birini seciniz...\n");
		
	}
	return 0;	
}

