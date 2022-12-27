#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop *//*
void degistir(int *ad1,int *ad2){
	int gecici=*ad1;
	*ad1 = *ad2;
	*ad2 = gecici;
	printf("a sayisi : %d\nb sayisi : %d\n",*ad1,*ad2);
}
*/
int main(int argc, char *argv[]) {
	//YER DEGÝSTÝRME
/*	int ramo=10;
	int *p;
	p=&ramo;
	printf("%d",p);
	
	int a=10,b=22;
	printf("degismeden onceki a : %d\ndegismeden onceki b : %d\n",a,b);
	degistir(&a,&b);
	int i;
	char can[100]="canan";
	
	printf("%s",can);
	*/
	
	//PALENDROM BULMA
	
/*	int i;
	char kelime[100];
	char*p1,*p2;
	printf("palendrom olup olmadigini kontrol edecegin kelimeyi gir...\n");
		gets(kelime);
	for(p2=kelime;*p2;p2++);
	p2--;
	for(p1=kelime;*p1;p1++,p2--){
		if(*p1 == *p2){
			printf("%c",*p2);
			if(p2==kelime){
				
				printf("\ngirdiginiz kelime palindromdur\n");
			}
		}
		else{
			printf("palindrom degil...\n");
			break;
		}
	}
*/

 		//TERSTEN YAZDIRMA	
 	
	char cumle[100];
	bas:
	printf("tersten yazdirmak istedigin cumleyi gir...\n");
	gets(cumle);
	char *p1,*p2;
	
	for(p2=cumle;*p2;p2++);
	p2--;	
	int gecici;
	for(p1=cumle;p2-p1>=0;p1++,p2--){
		gecici = *p1;
		*p1 = *p2;
		*p2 = gecici;
	}
	
	printf("%s\n\n",cumle);
	goto bas;

		
	//DÝZÝDEN ELEMAN SÝLME
/*	char ramo[100] = "kardesimHelicopter";

	printf("diziden kaldirmak istedigin elemanin no gir...\n");
	int kar;
	scanf("%d",&kar);
	char *p1,*p2;
	
	for(p2=ramo;*p2;p2++){
		if(p2==ramo+kar-1){
			break;
		}
	}
	for(p1=ramo;*p1;p1++);
	p1--;
	
	
	for(;p2<p1;p2++){
		*p2 = *(p2+1);
		if(p2==p1-1){
			*p1 = ' ';
		}
	}
	
	printf("%s",ramo);
	
*/	
	
	
	
	
	
	
	
	
		return 0;
}
