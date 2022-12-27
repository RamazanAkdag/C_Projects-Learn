#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,i,s=0;
	scanf("%d",&x);
	for(i=1;i<=x/2;i++){
		if(x%i==0){
			printf("%d\n",i);
			s++;
		}
	}
	printf("sayac = %d",s);
	return 0;
}
