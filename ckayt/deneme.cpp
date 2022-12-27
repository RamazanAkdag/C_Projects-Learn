#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void sirala(int dizi[],int n){
int gecici;	
	for(int i =0;i<n-1;i++){
		
		for(int j=0;j<n-1-i;j++){
			if(dizi[j] > dizi[j+1]){
				
				gecici = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = gecici;
			}
		}
	}	
}
int main(){
	setlocale(LC_ALL,"Turkish");
	int n;
	
	printf("lutfen kac sayi uretilecegini giriniz...\n");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	for(int i=0;i<n;i++){
		dizi[i] = rand()%100;
		printf("%d\n",dizi[i]);
	}

	sirala(dizi,n);
	for(int i =0;i<n;i++){
		printf("%d  ",dizi[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
   }
