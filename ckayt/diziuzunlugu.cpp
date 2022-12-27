#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	char dizi[5][20]= {"ramazan","sinem","esra","samet","yusuf"};
	char *dizininAdresi;
	dizininAdresi = &dizi[5][20];
	for(int i=0;dizi[i]!='\0';i++){
		printf("%s",*(dizininAdresi+i));
	}
	
	
	return 0;	
}

