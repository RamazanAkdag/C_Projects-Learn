#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char yaz(char *p[],int i){
	if(p+i == '\0')
		return ' ';
	else{
		printf("%c",p[i]);
		return yaz(p+1,i+1);
	}
	
	
}
int main(int argc, char *argv[]) {
	char dizi[2][3] = {{"van"},{"mus"}};
	char *p[2];
	p[0] = dizi[0];
	
	yaz(p[0],0);

	
	return 0;
}
