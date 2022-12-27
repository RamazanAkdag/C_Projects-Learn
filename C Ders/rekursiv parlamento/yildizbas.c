#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void yildizbas(int a){
	int i;
	if(a==0)
		return 0;
for(i=1;i<=a;i++){
	printf("*");
	
}
	printf("\n");	
	yildizbas(a-1);
	
}
int main(int argc, char *argv[]) {
	
	yildizbas(10);
	
	return 0;
}
