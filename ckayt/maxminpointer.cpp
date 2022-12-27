#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
	int sayi;
	printf("lutfen bir sayi giriniz...\n");
	scanf("%d",&sayi);
	int *sayininAdresi;
	sayininAdresi = &sayi;
	int i;
	int carpim=1;
	for(i=1;i<=*sayininAdresi;i++){
		carpim = carpim*i;
	
	}
	
	printf("%d",carpim);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
