#include <iostream>
#include <stdio.h>
#include <conio.h>

/*Min say� bulma
S�meyra S�mer
5210505067*/


int siralama(int dizi[],int min) {     // 
	
	for(int i=0; i<10; i++){    //Dizideki say�lar� teker teker d�nd�r�r 
		if(min>dizi[i]){        // 
			min=dizi[i];       //En k���k say�y� bulur  
		}	
	}
	
	printf("Dizinin en kucuk elemani:%d",min);    //Dizinin en k���k eleman�n� ekrana yazd�r�r.
	
}
main()
{
int min;
int dizi[]={15,23,45,36,9,87,30,68,55,99};  //Dizinin elemanlar�

min=dizi[0];

siralama(dizi,min); 
	getch();
	
}

//Y�r�tme Zaman� bir program�n veya algoritman�n i�levini yerine getirebilmesi i�in, temel kabul edilen i�lemlerden ka� adet y�r�t�lmesi gerekti�ini veren bir ba��nt�d�r.
//Bu ba��nt�n�n ba��ms�z de�i�keni genelde eleman say�s�d�r ve �rne�in n elemanl� bir k�me i�in y�r�tme zaman� T(n) olarak g�sterilir.
//Bu kodda eleman say�s� 10'dur. 10 say�y� d�nd�rerek dizinin en k���k eleman�n� bulur. Bu kodun y�r�tme zaman� T(n)=10 olarak g�sterilir. 
