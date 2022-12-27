#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ters(char *dizi,char *p2){
	if(p2>=dizi){
		printf("%c",*p2);
		 ters(dizi,p2-1);
		
	}
	
	

}
int main(int argc, char *argv[]) {
	char dizi[] = "sikim parlamento icinde ve parlamento disinda";
	char *p2;
	p2 = dizi;
	for(;*p2;p2++);
	p2--;
	

	ters(dizi,p2);
	
	return 0;
}
