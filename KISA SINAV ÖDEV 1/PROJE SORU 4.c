#include <stdio.h>
#include <stdlib.h>

	 	
	/*  SORU 4 : 5 ADET ��RENC�N�N K���SEL VE ADRES B�LG�LER�N� DEPOLAYAN STRUCT TANIMLAMA VE EKRANDA G�STEREN KOD */
	
	// Struct yap�s�yla ��renci bilgileri tan�mlan�r.
	struct ogrenci {
		char isim [50];
		char soyisim [50];
		int numarasi ;
	char adresi [100] ;
// T�m hepsi ile il�kili ki�iler dizisi olu�turulur.
	}kisiler [5];
	


	int main(){

int a;

// ��renci bilgilerini girmek i�in d�ng� yaz�l�r.
   for( a=0;a<5;a++){
printf("%d.ogrenci bilgileri giriniz:\n",a+1);
	//�stte tan�mlad���m struct yap�s�na ula�mak i�in ki�iler dizisine nokta koyarak istedi�imize ula�abiliriz.
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
//Daha sonra ��renci bilgilerini ekrana yazd�rmak i�in d�ng� olu�turulur.
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
