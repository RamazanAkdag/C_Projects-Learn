#include <stdio.h>
#include <stdlib.h>
void kare(int satir){
	int j;
	for(int i=satir;i>=0;i--){
		
		for(j=1;j<=2*satir;j++){
			if(j==i || j==(2*satir)-i || i==0 || j==satir){
				printf("*");
				
			}
			else
			printf(" ");
				
		
			}
			printf("\n");
			}
	int k=1;
	for(int i=(2*satir)-1;i>=satir;i--){
		for(int j=1;j<=2*satir;j++){
			if(j==i || j==k || j==satir){
			printf("*");
			
		}
			else
			printf(" ");
			
		}
		k++;
			printf("\n");
	}
	
	

	
	
	
	
	
}

int main(){
	int n;
	scanf("%d",&n);
	kare(n);
	
	printf("A N A N I Z I  S Ý K E Y Ý M ...\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
