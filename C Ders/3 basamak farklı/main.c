#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int b,o,y,i,j,sayac=0,f,k;
	for( i=100;i<1000;i++){
		b=i%10;
		y=i/100;
		o=(i%100)/10;
		if(y!=b && y!=o && o!=b){
			printf("%d\n",i);
			sayac++;
		}
	}
	
	printf("sayac = %d\n",sayac);
	
	
	
	
	
	return 0;
}
