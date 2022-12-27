#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
/*char *takimlar[]={"fenerbahce","galatasaray","trabzonspor","besiktas"};
int i;
for(i=0;takimlar[i]!='\0';i++){
	printf("%s\n",*(takimlar+i));
}
*/	

char ulkeler[5][20];
for(int i=0;i<5;i++){
	printf("lutfen %d. elemaný giriniz...\n",i+1);
	scanf("%s",ulkeler[i]);
}
printf("dizimiz:\n");
/*for(int i=0;i<5;i++){
	printf("%s\n",ulkeler[i]);
}	

/*for(int i=0;ulkeler[i]!='\0';i++){
	printf("%s\n",*(ulkeler+i));
}	
*/	
char *ulkelerinAdresleri[5];

for(int i=0;i<5;i++){
	ulkelerinAdresleri[i]= &ulkeler[i][20];	
}
	for(int i=0;i<5;i++){
		printf("%s\n",*(ulkelerinAdresleri+i));
	}
	
	
	
	return 0;
}
