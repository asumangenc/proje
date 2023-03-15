#include <stdio.h>
#include <stdlib.h>

	 	
	/*  SORU 4 : 5 ADET ÖÐRENCÝNÝN KÝÞÝSEL VE ADRES BÝLGÝLERÝNÝ DEPOLAYAN STRUCT TANIMLAMA VE EKRANDA GÖSTEREN KOD */
	
	// Struct yapýsýyla öðrenci bilgileri tanýmlanýr.
	struct ogrenci {
		char isim [50];
		char soyisim [50];
		int numarasi ;
	char adresi [100] ;
// Tüm hepsi ile ilþkili kiþiler dizisi oluþturulur.
	}kisiler [5];
	


	int main(){

int a;

// Öðrenci bilgilerini girmek için döngü yazýlýr.
   for( a=0;a<5;a++){
printf("%d.ogrenci bilgileri giriniz:\n",a+1);
	//Üstte tanýmladýðým struct yapýsýna ulaþmak için kiþiler dizisine nokta koyarak istediðimize ulaþabiliriz.
	printf("isim: ");
	scanf("%s",kisiler[a].isim);
	
	printf("sayisim: ");
	scanf("%s",kisiler[a].soyisim);
	
		printf("numarasi: ");
	scanf("%d",&kisiler[a].numarasi);
	
		printf("adresi: ");
	scanf("%s",kisiler[a].adresi);
	printf("\n\n");
	
	
}
//Daha sonra öðrenci bilgilerini ekrana yazdýrmak için döngü oluþturulur.
printf("                                  OGRENCI BILGILERI                       ");
for( a=0;a<5;a++){
	
	
	printf("\n\n");
	
	printf("%d.ogrenci bilgileri:\n",a+1);
	
	printf("isim :%s\n",kisiler[a].isim);
		printf("soyisim :%s\n",kisiler[a].soyisim);
		printf("numarasi :%d\n",kisiler[a].numarasi);
	printf("adresi:%s\n",kisiler[a].adresi);
		
		
		
}
	return 0;
}
