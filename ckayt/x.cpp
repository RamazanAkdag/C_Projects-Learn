#include <stdio.h>
#include <stdlib.h>
void sekil(int satir){
	int k=0;
	for(int i=2*satir-1;i>=0;i--){
		for(int j=0;j<=4*satir-2;j++){
		if(i>=satir){
			
			if(j==i || j==i+2*k || i==satir)		
				printf("*");
				else
				printf(" ");
		if(i<satir){
			if(j==i)
				printf("*");
				else
				printf(" ");
		}
	}
		}
		k++;
	
		printf("\n");
	}

}

int main(){
	int x;
	scanf("%d",&x);
	sekil(x);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
