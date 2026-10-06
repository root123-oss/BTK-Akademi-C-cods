#include <stdio.h>
#include <stdlib.h>
/* BTK Akademi Typecasting */
int main()
{
    int sayi1=17,sayi2=5;

    int tamsayi_bolme_sonucu;
    float gercel_bolme_sonucu_float;
    double gercel_bolme_sonucu_double;
    int gercel_bolme_sonucu_float_tamsayi;

    tamsayi_bolme_sonucu=sayi1/sayi2;
    printf("Tamsayi bolme sonucu= %d\n",tamsayi_bolme_sonucu);

    gercel_bolme_sonucu_float=sayi1/sayi2;
    printf("Gercek bolme sonucu (float)=%f\n",gercel_bolme_sonucu_float);

    gercel_bolme_sonucu_double=sayi1/sayi2;
    printf("Gercek bolme sonucu (double)=%f\n",gercel_bolme_sonucu_double);

    gercel_bolme_sonucu_float_tamsayi=gercel_bolme_sonucu_float;
    printf("Gercek bolme sonucu (float)'un tam sayiya donusturulmus hali=%d\n",gercel_bolme_sonucu_float_tamsayi);

    return 0;
}
