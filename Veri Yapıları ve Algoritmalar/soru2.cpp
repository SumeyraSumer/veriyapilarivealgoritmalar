#include <iostream>
#include <stdio.h>
#include <conio.h>

/*Min sayý bulma
Sümeyra Sümer
5210505067*/


int siralama(int dizi[],int min) {     // 
	
	for(int i=0; i<10; i++){    //Dizideki sayýlarý teker teker döndürür 
		if(min>dizi[i]){        // 
			min=dizi[i];       //En küçük sayýyý bulur  
		}	
	}
	
	printf("Dizinin en kucuk elemani:%d",min);    //Dizinin en küçük elemanýný ekrana yazdýrýr.
	
}
main()
{
int min;
int dizi[]={15,23,45,36,9,87,30,68,55,99};  //Dizinin elemanlarý

min=dizi[0];

siralama(dizi,min); 
	getch();
	
}

//Yürütme Zamaný bir programýn veya algoritmanýn iþlevini yerine getirebilmesi için, temel kabul edilen iþlemlerden kaç adet yürütülmesi gerektiðini veren bir baðýntýdýr.
//Bu baðýntýnýn baðýmsýz deðiþkeni genelde eleman sayýsýdýr ve örneðin n elemanlý bir küme için yürütme zamaný T(n) olarak gösterilir.
//Bu kodda eleman sayýsý 10'dur. 10 sayýyý döndürerek dizinin en küçük elemanýný bulur. Bu kodun yürütme zamaný T(n)=10 olarak gösterilir. 
