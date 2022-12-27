#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct kilo{
		float kas_kutlesi;
		float yag_kutlesi;
	};
	struct sporcu{
		char isim[100];
		float boy;
		struct kilo;
		int yas;
		int kcal_miktari;
		
	};
	struct sporcu ramo;
	
	ramo.boy = 1.80;
	strcpy(ramo.isim,"ramazan akdag");
	
	
	printf("%f\n%s",ramo.boy,ramo.isim);



	return 0;
}
