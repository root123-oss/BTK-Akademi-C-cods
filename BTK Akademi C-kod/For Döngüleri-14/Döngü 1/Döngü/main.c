#include <stdio.h>
//BTK Akademi Döngülere Giriþ
int main()
{
    int i, n, toplam=0;

    /* Kullanýcýdan üst sýnýr deðerini al */
    printf("Üst sýnýr deðerini giriniz: ");
    scanf("%d", &n);

    /* Tüm sayýlarýn toplamýný hesapla */
    for(i=1; i<=n; i++)
    {
        toplam += i; // toplam = toplam + i diye de yazabilirdik
    }

    printf("Ýlk %d adet doðal sayýnýn toplamý = %d", n, toplam);

    return 0;
}
