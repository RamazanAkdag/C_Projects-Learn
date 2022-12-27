#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"Turkish");
char kelime[30];
char *duzadres,*tersadres;

printf("lutfen palendrom olup olmadýgýný ogrenmek istediginiz kelimeyi giriniz...\n");
gets(kelime);
puts(kelime);

for(tersadres = kelime;*tersadres!=NULL;tersadres++);
	
	return 0;
}
