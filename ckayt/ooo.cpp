#include <stdio.h>
#include <stdlib.h>
int bol(int sayi1,int sayi2){
	if(sayi2==1){
		return sayi1;
	}
	else if(sayi1==sayi2){
		return 1;
	}
	else if(sayi2>sayi1)
		return 0;
	else{
		return 1+bol(sayi1-sayi2,sayi2);
	}
}

int main(){
	
	printf("%d",bol(36,4));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
