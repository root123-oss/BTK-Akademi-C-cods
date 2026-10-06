#include <stdio.h>
#include <stdlib.h>
//BTK Akademi Define ve Constant
#define BUYUK_SAYI 1000000 // satýr sonunda ";" yok

int BelirliIslemlerGerceklestir(int girdi) {
    return (girdi < BUYUK_SAYI);
    // return (girdi < BASKA_BIR_BUYUK_SAYI);  // bu satýr hata verecektir.
}

int main() {

    int ilk_degisken = 20;
    int ikinci_degisken = 25;
    int sonuc1, sonuc2;
    const int BASKA_BIR_BUYUK_SAYI = 1000000;

    printf("Büyük Sayý : %d\n", BUYUK_SAYI);

    sonuc1 = (ilk_degisken < BUYUK_SAYI);
    printf("Sonuç 1 : %d\n", sonuc1);

    sonuc2 = (ikinci_degisken < BUYUK_SAYI);
    printf("Sonuç 2 : %d\n", sonuc2);

    #undef BUYUK_SAYI
    #define BUYUK_SAYI 30000000
    printf("Büyük Sayý : %d\n", BUYUK_SAYI);

    return 0;
}
