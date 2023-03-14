#include <stdio.h>
#include <stdlib.h>

/* Struct Yapýsý
Sümeyra Sümer 
5210505067*/

struct ogrenci {
    char ad[50];
    char soyad[50];
    int ogrenci_no;
    char adres[50];
};

int main(int argc, char *argv[]) {
	
	struct ogrenci ogrenciler[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Ogrenci %d:\n", i+1);
        printf("Ad: ");
        scanf("%s", ogrenciler[i].ad);
        printf("Soyad: ");
        scanf("%s", ogrenciler[i].soyad);
        printf("Ogrenci No: ");
        scanf("%d", &ogrenciler[i].ogrenci_no);
        printf("Adres: ");
        scanf("%s", ogrenciler[i].adres);
        printf("--------------------------------------------------------------------\n");
    }
    
    

    
    printf("\nOgrenci Bilgileri:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. Ogrenci\n", i+1);
        printf("Ad: %s\n", ogrenciler[i].ad);
        printf("Soyad: %s\n", ogrenciler[i].soyad);
        printf("Ogrenci No: %d\n", ogrenciler[i].ogrenci_no);
        printf("Adres: %s\n", ogrenciler[i].adres);
        printf("\n");
        printf("--------------------------------------------------------------------\n");
    }
	
	
	
	
	return 0;
}
