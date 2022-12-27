#include <stdio.h>
#include <stdlib.h>
int u;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sorgula(int x[],int boy){
	int a,i;
	printf("lutfen ogrenci nuarasi giriniz...\n");
	scanf("%d",&a);
	u = a;
	for(i=0;i<boy;i++){
		if(x[i] == a){
			return i;
		}
		else
			return 0;
	}
}
float hesapla(int notlar[][8],int k){
	int i;
	float ortalama=0;
	for(i=0;i<8;i++){
		ortalama+=notlar[k][i];
	}
	ortalama = ortalama/8;
	return ortalama;
}
int main(int argc, char *argv[]) {
	int notlar[][8] = {{10,20,30,40,50,60,70,80},{10,21,31,41,51,61,71,81},{18,28,38,48,58,68,78,88},{19,29,39,49,59,69,79,89},{13,23,33,43,53,63,73,83,}};
	int ogrNo[]={400,500,600,700,800};
	int i,j;
		//printf("%d",sorgula(ogrNo,5))
	
		float z = hesapla(notlar,sorgula(ogrNo,5));
			if(sorgula(ogrNo,5)==0)
			printf("girdiginiz numaraya (%d) sahip ogrenci okulumuzda bulunmmaktadir...\n",u);
if(z<=50){
	printf("%d nolu ogrencimizin ortalamasi : %f\nogrencimiz kalmistir...\n",u,z);
}	

	
	
	
	
	
	
	
	
	
	
	return 0;
}
