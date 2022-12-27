#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ogrenci{
	char ad[30];
	char soyad[30];
	char okul[100];
	char bolum[30];
	int okulNo;
	int sinif;

}ogr1,ogr2;

struct kitapci{
	char kitapAdi[100];
	char kitapYazari[100];
	int baskiSayi;
	char yayinevi[30];
	int kod;
	float fiyat;
}kitaplar[4] = {{"kavgam","Adolf Hitler",35,"olum yayinlari",1111456,42.3},{"sol ayagim","Adam Maher",23,"trilogy yayinlari",1111567,32.7},{"suc ve ceza","Dostoyevski",18,"gta yayinlari",1111678,50},{"itiraflarim","Tolstoy",26,"cj yayinlari",1111789,34.90}};


int main(int argc, char *argv[]) {

/*struct tarih{
	int gun;
	char ay[10];
	int yil;
	};
	
		
	struct calisan_bilgi{
		int sicilNo;
		char isim[30];
		char evAdresi[300];
		struct tarih iseGiris;
		double maas;
		
		
	};calisan
*/
/*struct sehir{
	char sehirAdi[20];
	int plakaKodu;
};
struct sehir Turkiye[82];
*/
/*strcpy(ogr1.ad,"ramazan");
strcpy(ogr1.soyad,"AKDAG");
strcpy(ogr1.bolum,"yazilim muhendisligi");
strcpy(ogr1.okul,"karadeniz teknik universitesi");
ogr1.okulNo = 416422;
ogr1.sinif =  1;


	printf("%s\n%s\n%s\n%s\n%d\n%d\n",ogr1.ad,ogr1.soyad,ogr1.bolum,ogr1.okul,ogr1.okulNo,ogr1.sinif);
	printf("\n");
	
strcpy(ogr2.ad,"rozerin");
strcpy(ogr2.soyad,"AKDAG");
strcpy(ogr2.bolum,"kimya muhendisligi");
strcpy(ogr2.okul,"yildiz teknik universitesi");
ogr2.okulNo = 416422;
ogr2.sinif =  4;
		printf("%s\n%s\n%s\n%s\n%d\n%d\n",ogr2.ad,ogr2.soyad,ogr2.bolum,ogr2.okul,ogr2.okulNo,ogr2.sinif);
		*/
	
		
		
		
		int a;
		float toplamFiyat;
		bas:
	printf("almak istediginiz kitabi secin...\n");
	scanf("%d",&a);
	toplamFiyat += kitaplar[a-1].fiyat;
	printf("almak istediginiz kitap : %s\n",kitaplar[a-1].kitapAdi);
	printf("odemeniz gereken tutar : %f\n",toplamFiyat);
	goto bas;
//	printf("ad : %s\nyazar : %s\nbaski : %d\nyayinlayan : %s\nkitap kodu : %d\nucret : %f\n\n",ktp2.kitapAdi,ktp2.kitapYazari,ktp2.baskiSayi,ktp2.yayinevi,ktp2.kod,ktp2.fiyat);

	return 0;
}
