#include <stdio.h>
#include <stdlib.h>
#define t 3

struct ogr{
	char ad[50];
	int no;
	float ogrNot;
	
}ogrenci[t];

struct ogr ekle(struct ogr a){
	printf("ogrencinin adini giriniz...\n");
	fflush(stdin);
	gets(a.ad);
	printf("ogrencinin no giriniz...\n");
	scanf("%d",&a.no);
	printf("ogrencinin notunu giriniz...\n");
	scanf("%f",&a.ogrNot);
	return a;
}

void yaz(struct ogr b){
	printf("adi : %s,  nosu : %d ,  notu :%f\n\n",b.ad,b.no,b.ogrNot);
}

float ortalama(struct ogr g[]){
	float ort=0;
	int i;
	for(i=0;i<t;i++){
	ort +=	g[i].ogrNot;
	}
	return ort/t;	
}
int main(int argc, char *argv[]) {

	char kar;
	
	int i,u,s,j;
baslangic:
	i=0;
	s=0;
	for(;i<t;i++){

	printf("lutfen yapmak istediginiz islemi giriniz...[e,y]\n(bitirmek icin b ye basin)\n");
	fflush(stdin);
	scanf("%c",&kar);
	
	switch(kar){
		case 'e': ogrenci[i] = ekle(ogrenci[i]);break;
		
		case 'y':
			
			printf("hangi ogrenciyi yazdirmak istersiniz no giriniz...\n");
			scanf("%d",&u);
			for(j=0;j<t;j++){
				if(u == ogrenci[j].no){
					yaz(ogrenci[j]);
				}else
					s++;
					}	
			if(s == t)
				printf("yanlis ogrenci no girdiniz...\n\n");
				i=i-1;
				break;
		
		case'b':return 0;break;
		
		default: printf("yanlis harf girildi...\n");break;
	}
	
}
	if(i == t)
	printf(" !!! ogrenci kontenjanimiz dolmustur!!!\n\n\n");	


	printf("girdiginiz ogrenci ortalamalari = %f\n\n",ortalama(ogrenci));
	
	goto baslangic;
	return 0;
}
