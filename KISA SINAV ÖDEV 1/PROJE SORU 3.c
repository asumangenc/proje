#include <stdio.h>
#include <stdlib.h>

	/* SORU 3: D�Z� ��ER�S�NDE ARAMA YAPAN KOD PAR�ASININ �ALI�MA ZAMANLARINI HESAPLAMA */
	
	int  search ()
	{
		int i =0;           // 1.sat�r = 1
		while (i<N){           // 2.sat�r = N+1
			if(D[i]==sayi)break;    // 3.sat�r =N 
			i++;            // 4. sat�r= N 
			
		}
 		if(i<N) return i; // 5. sat�r =1       
 		else return -1;    // 6. sat�r = 1   
	/*  en iyi �al��ma zaman� =
 	d�ng� sadece 1 kz �al���rsa  T(n)= 3*1+4=7 
 	ortalama �al��ma zaman� =
	d�ng� N/2 kez �al���rsa = T(n)= 3*(N/2)+4 =  1.5N+4		
	 	
	en k�t� �al��ma zaman� =
	d�ng� N kez �al���rsa= T(n)= 3*N+4
	 	
	*/ 	
	return 0;
}
