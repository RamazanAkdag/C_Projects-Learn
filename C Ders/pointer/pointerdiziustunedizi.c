#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ramo[100] = "selamunaleykum";
	char beko[100] = "kardesimhelikopter";
	char *p1,*p2;
	p1 = ramo;
	for(;*(p1);p1++);
	
	p2 = beko;
	for(;*(p2);p2++,p1++){
		*p1 = *p2;
	}
	
	printf("%s",ramo);	
	return 0;
}
