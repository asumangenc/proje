#include <stdio.h>
#include <stdlib.h>

	/* SORU 3: DÝZÝ ÝÇERÝSÝNDE ARAMA YAPAN KOD PARÇASININ ÇALIÞMA ZAMANLARINI HESAPLAMA */
	
	int  search ()
	{
		int i =0;           // 1.satýr = 1
		while (i<N){           // 2.satýr = N+1
			if(D[i]==sayi)break;    // 3.satýr =N 
			i++;            // 4. satýr= N 
			
		}
 		if(i<N) return i; // 5. satýr =1       
 		else return -1;    // 6. satýr = 1   
	/*  en iyi çalýþma zamaný =
 	döngü sadece 1 kz çalýþýrsa  T(n)= 3*1+4=7 
 	ortalama çalýþma zamaný =
	döngü N/2 kez çalýþýrsa = T(n)= 3*(N/2)+4 =  1.5N+4		
	 	
	en kötü çalýþma zamaný =
	döngü N kez çalýþýrsa= T(n)= 3*N+4
	 	
	*/ 	
	return 0;
}
