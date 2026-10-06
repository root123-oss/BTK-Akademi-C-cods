#include <stdio.h>
#include <stdlib.h>
/* BTK Akademi Temel Aritmetik iþlemlerin
C Programlama dilinde gerçekleþtirilmesi */
int main()
{
    int sayi1, sayi2;
    int toplam, fark, carpim,mod;
    float bolum;

    //kullanýcý girisi alýyoruz
    printf("Lutfen birinci sayi giriniz: ");
    scanf("%d",&sayi1);
    printf("Lutfen ikinci sayi giriniz: ");
    scanf("%d",&sayi2);

    toplam=sayi1+sayi2;
    fark=sayi1-sayi2;
    carpim=sayi1*sayi2;
    bolum=sayi1/sayi2;
    mod=sayi1%sayi2;

    //sonuclarý yazdýrma kýsmý
    printf("Toplam=%d\n",toplam);
    printf("Fark=%d\n",fark);
    printf("Carpim=%d\n",carpim);
    printf("Bolum=%f\n",bolum);
    printf("Kalan veya Mod=%d",mod);

    return 0;
}
