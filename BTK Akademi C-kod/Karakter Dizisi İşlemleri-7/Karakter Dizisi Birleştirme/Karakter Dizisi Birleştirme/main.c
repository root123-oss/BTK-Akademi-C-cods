#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BTK Akademi string birleþtirme,kopyalama ve karþýlaþtýrma iþlemleri
int main()
{
    char metin1[20]="Merhaba";
    char metin2[]="Dunya";
    char metin3[20];

    //Metin2'yi metin1'in ucuna ekleme(sonuç metin1'de depolanýr.
    strcat(metin1,metin2);

    //metin1'i yazdýr
    printf("%s\n",metin1);

    //metin1 içeriðini metin3'e kopyalama
    strcpy(metin3,metin1);

    //metin3'ü yazdýr
    printf("%s\n",metin3);

    //compare metin1 ve metin3 karþýlaþtýrma
    printf("%d\n",strcmp(metin1,metin3));
    printf("%d\n",strcmp(metin1,metin2));
    printf("%d\n",strcmp(metin2,metin1));

    return 0;
}
