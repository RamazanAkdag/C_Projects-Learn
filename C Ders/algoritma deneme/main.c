#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	int dizi[] = {1,3,6,9,8,4,5,0,12,45,23,34,47};
	int tutucu[8] = {0};
	int i,j;*/
/*	for(i=0;i<13;i++){
		tutucu[dizi[i]]++;
		
	}
	for(i=0;i<8;i++){
		if(tutucu[i]==0){
			continue;
		}else
		printf("%d : %d\n",i,tutucu[i]);
	}*/
/*	int g;
	for(i=0;i<13;i++){
		for(j=i+1;j<13;j++){
			if(dizi[i]>dizi[j]){
				g = dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=g;
			}
		}
	}
	for(i=0;i<13;i++){
		printf("%d\n",dizi[i]);
	}*/
	int dizi[10][10]={0};
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(j<=i){
				dizi[i][j]=5;
				
			}
			printf("%d",dizi[i][j]);
		}
		printf("\n");
	}

	return 0;
}
