#include <stdio.h>
#include <stdlib.h>
int a = 0;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char boyut(char *dizi){

	if(*dizi=='\0'){
		return a ;
	}
	else{
		a++;
		//printf("%c",*(dizi));
		return boyut(dizi+1);
	} 
}
int main(int argc, char *argv[]) {
	char dizi[] = "aminakoayayim";
printf("%d",boyut(dizi));
	return 0;
}
