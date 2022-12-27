#include <stdio.h>
#include <stdlib.h>
//#define a 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a,b;
void terscevir(int dizi[a][a]){
	int i,j;
	int g[a][a];
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			g[j][i] = dizi[i][j] ;
			
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			dizi[i][j] = g[i][j];
		}
}
}
int main(int argc, char *argv[]) {
	
	printf("dizinin satir ve sutunlarini giriniz...\n");
	scanf("%d ",&a);
	
	int dizi[a][a];
	int i,j,k;
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			scanf("%d",&dizi[i][j]);			
		}
	}
	//ilk hali yazdirma
	printf("dizinin duz hali : \n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			printf("%d ",dizi[i][j]);//1 2
		}							// 3 4
		printf("\n");
	}
	printf("\n\n\n");
	terscevir(dizi);
	//ters cevir
	/*int g[a][a];
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			g[j][i] = dizi[i][j] ;
			
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			dizi[i][j] = g[i][j];
		}
	}*/
	//ters yazdirma
	printf("dizinin ters hali : \n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
