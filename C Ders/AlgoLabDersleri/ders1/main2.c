#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 	static	int i,a,b,c,j=0;
 	printf("selamun aleykum %d dev adam\n",12);
	for(i=100;i<1000;i++)
	{
		a=(i%10);
		b=(i%100)/10;
		c=(i%1000)/100;
		if(pow(a,3) + pow(b,3) + pow(c,3) == i){
			printf("%d\n",i);
			j++;
		}
	}
	printf("armstrong sayilari %d tanedir...\n",j);
	return 0;
}
