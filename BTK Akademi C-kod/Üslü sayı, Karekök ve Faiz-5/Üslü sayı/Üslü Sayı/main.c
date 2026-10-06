#include <stdio.h>
#include <stdlib.h>
#include <math.h>//pow() fonkisyounun kullanabilmekl icin
//BTK Akademi Uslu sayý hesabý yapan program
int main()
{
    double taban,kuvvet,sonuc;
    //kullanýcýdan iki sayý al
    printf("Taban degerini giriniz: ");
    scanf("%lf",&taban);
    printf("Kuvvet degerini giriniz: ");
    scanf("%lf",&kuvvet);

    //taban^kuvvet degerini hesapla
    sonuc=pow(taban, kuvvet);
    printf("%f^%f=%f ",taban,kuvvet,sonuc);

    return 0;
}
