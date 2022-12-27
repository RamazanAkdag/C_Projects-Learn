#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Turkish");

	int n;
	printf("kac adet sayi uretilecek...\n");
	scanf("%d",&n);	
	int dizi[n];
	srand(time(0));
	for(int i=0;i<n;i++){
		dizi[i] = rand()%100;
		printf("%d\n",dizi[i]);
	}

	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
