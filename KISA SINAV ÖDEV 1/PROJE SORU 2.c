#include <stdio.h>
#include <stdlib.h>



/*  SORU 2: D�Z� ��ER�S�NDE EN K���K ELEMANI BULAN FONKS�YON VE BU FONKS�YONUN Y�R�TME ZAMANINI G�STEREN T(n) BA�INTISI. */

		
int kucuksayi(int k[]){
	int i=5;
	int sayi; 
	int a;
	// �lk �nce tan�mlamalar� yapt�ktan sonra d�ng� yaz�l�r.
	/* Y�r�tme zaman� ise kodun ne kadar �al��t��� ile ilgilidir.
	1.sat�rda kod d�ng�ye girmedi�i i�in 1 al�n�r.2.sat�rda ise 
	d�ng� oldu�u i�in bu d�ng� 1 kez ba�lar sonra i kadar tekrarlar en son ise i-1 kez d�ng�ye girer.
	3.sat�rda ise kar��la�t�rma yap�ld��� i�in d�ng� say�s� kadar i-1 tekrarlar.
	4.satt�rda atama i�lemi vard�r 3.sat�rla ayn� i-1 .son olarak 5. sat�rda ise 1 kez i�lem yapt��� i�in 1 al�n�r.
	*/
	sayi=k[0];    // 1.sat�r =1
	for (a=0;a<i;a++)  // 2.sat�r = 1+i+i-1=2i
	if( sayi>k[a])  // 3.sat�r= i-1
	sayi=k[a];  // 4.sat�r =i-1   en k�t� durumda i-1 olur 
	return sayi;  // 5.sat�r =1 
	
}
int main() {
int i=5;
	

	int k[i];
	int a;
	for(a=0;a<i;a++){
		printf("%d.sayiyi giriniz:",a+1);
		scanf("%d",&k[a]);
	}


	printf ("dizideki en k���k sayi:%d",kucuksayi(k));
	

	return 0;
}
