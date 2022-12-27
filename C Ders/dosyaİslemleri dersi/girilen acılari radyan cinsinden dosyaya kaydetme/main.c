#include <stdio.h>
#include <stdlib.h>
#define P 3,14
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *ramo;
	int i;
	double sinus,cosinus;
	ramo = fopen("radyan.txt","w");
	
	fprintf(ramo,"DERECE\t SÝN\t COS\n");
	fprintf(ramo,"======\t=====\t=====\n");
	
	for(i=0;i<=360;i++){
	sinus = sin((i*P/180));
	cosinus = cos((i*P/180));
	fprintf(ramo,"%d\t%.4lf\t%.4lf\n",i,sinus,cosinus);
	}
	
	
	
	fclose(ramo);
	return 0;
}
