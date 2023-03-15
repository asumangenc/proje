#include <stdio.h>
#include <stdlib.h>



/*  SORU 2: DÝZÝ ÝÇERÝSÝNDE EN KÜÇÜK ELEMANI BULAN FONKSÝYON VE BU FONKSÝYONUN YÜRÜTME ZAMANINI GÖSTEREN T(n) BAÐINTISI. */

		
int kucuksayi(int k[]){
	int i=5;
	int sayi; 
	int a;
	// Ýlk önce tanýmlamalarý yaptýktan sonra döngü yazýlýr.
	/* Yürütme zamaný ise kodun ne kadar çalýþtýðý ile ilgilidir.
	1.satýrda kod döngüye girmediði için 1 alýnýr.2.satýrda ise 
	döngü olduðu için bu döngü 1 kez baþlar sonra i kadar tekrarlar en son ise i-1 kez döngüye girer.
	3.satýrda ise karþýlaþtýrma yapýldýðý için döngü sayýsý kadar i-1 tekrarlar.
	4.sattýrda atama iþlemi vardýr 3.satýrla ayný i-1 .son olarak 5. satýrda ise 1 kez iþlem yaptýðý için 1 alýnýr.
	*/
	sayi=k[0];    // 1.satýr =1
	for (a=0;a<i;a++)  // 2.satýr = 1+i+i-1=2i
	if( sayi>k[a])  // 3.satýr= i-1
	sayi=k[a];  // 4.satýr =i-1   en kötü durumda i-1 olur 
	return sayi;  // 5.satýr =1 
	
}
int main() {
int i=5;
	

	int k[i];
	int a;
	for(a=0;a<i;a++){
		printf("%d.sayiyi giriniz:",a+1);
		scanf("%d",&k[a]);
	}


	printf ("dizideki en küçük sayi:%d",kucuksayi(k));
	

	return 0;
}
