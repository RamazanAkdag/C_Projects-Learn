#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void ucgen(int satir){
	int bosluk;
	
	bosluk=satir-1;
	for(int i=1;i<=satir;i++){
		for(int j=1;j<=bosluk;j++){
			printf(" ");
		}
		for(int k=1;k<=2*i-1;k++){
			printf("* ");
		}

		
		bosluk--;
		printf("\n");
	}
		
	
	
	
	
	
}
int main(){
	setlocale(LC_ALL,"Turkish");


		int satir, bosluk;
	satir=15;
	bosluk=0;
	for(int i=1;i<=satir;i++){
		for(int j=1;j<i;j++){
			printf(" ");
		}
		for(int k=1;k<2*satir-2*i+2;k++){
			printf("* ");
		}
		bosluk++;
		printf("\n");
	}
		ucgen(15);
	
	return 0;
}

