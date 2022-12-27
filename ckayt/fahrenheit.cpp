#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float celcius(float fahrenheit){
	
	return (fahrenheit-32)/1.8;
	}
float fahrenheit(float celcius){
	
	return (celcius*1.8)+32;
}

int main(){
	setlocale(LC_ALL,"Turkish");
	float derece;
	char karakter;
	printf("fahrenheit mý gireceksiniz celcius mu[c/f]?\n");
	scanf("%c",&karakter);
	
	
if(karakter=='c' || karakter== 'C'){

	
	printf("fahrenheite donusturmek istediginiz celcius sayiyi giriniz...\n");
	scanf("%f",&derece);
	
	printf("%f celcius %f fahrenheit derecedir...\n",derece,fahrenheit(derece));
	
}
else if(karakter== 'f' || karakter== 'F'){
	printf("celciusa donusturmek istediginiz fahrenheit degerini giriniz...\n");
	scanf("%f",&derece);
	
	printf("%f fahrenheit %f celcius derecedir...\n",derece,celcius(derece));
}
else{
	printf("lutfen 'c, C, f, F'karakterlerinden birini giriniz...\n");
	scanf("%f",&derece);
}

	
	
	
	return 0;	
}

