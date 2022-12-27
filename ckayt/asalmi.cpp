#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fib(int sayi){
	if(sayi==2 || sayi==1){
		return 1;
	}
	else
	return fib(sayi-1)+fib(sayi-2);
	
}


int main(){
	
	printf("%d",fib(5));

	
	
	
	
	
	
	
	return 0;
}
