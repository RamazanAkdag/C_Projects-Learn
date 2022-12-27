#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void kare(int n){
	int i,j;
	for(i=n;i>=1;i--){
		for(j=1;j<=n;j++){
			if(i-j==n/2 || i+j==n+(n/2)+1 || i+j==n-(n/2)+1 || j-i==n-(n/2)-1 || j==(n/2)+1 || i==(n/2)+1){
				printf("*");
			}else
				printf(" ");
			
		}
			printf("\n");
	}
	
	
	
	
	
	
	
	
}
int main(int argc, char *argv[]) {
	int satir;
	scanf("%d",&satir);
	kare(satir);
	
	return 0;
}
