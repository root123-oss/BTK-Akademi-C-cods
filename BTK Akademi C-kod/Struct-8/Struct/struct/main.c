#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BTK Akademi struct
struct personelbilgisi{ //PersonelBilgisi isimli struct oluþturma
    int Yas;
    float Maas;
    char Isim[30];
    char Cinsiyet[8];
    };
int main(){
    //PersonelBilgisi yapýsýnda,Personel isimli bir deðiþken tanýmlama
    struct personelbilgisi personel1;

    //Personel1'in alanlarýna deðer atama
    strcpy(personel1.Isim,"Ahemt Ahmetoglu");
    strcpy(personel1.Cinsiyet,"Erkek");
    personel1.Yas=34;
    personel1.Maas=8500;

    //personel1 struct degerlerini yazdýr
    printf("Personelin Adi: %s\n",personel1.Isim);
    printf("Personelin Cinsiyeti: %s\n",personel1.Cinsiyet);
    printf("Personelin Yasi:%d\n",personel1.Yas);
    printf("Personelin Maasi: %f\n",personel1.Maas);


    return 0;
}
