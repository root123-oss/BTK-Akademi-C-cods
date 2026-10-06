#include <stdio.h>

int main()
{
    /* Deðiþken beyanlarý (deklarasyonlarý) */

    char karakter = 'C';
    int tamsayi = 1;
    float gercel_sayi = 10.4f;
    long long buyuk_tamsayi = 98989898911;

    printf("karakter deðiþkeninin deðeri= %c, karakter deðiþkeninin adresi = %u\n", karakter, &karakter);
    printf("tamsayi deðiþkeninin deðeri= %d, tamsayi deðiþkeninin adresi= %u\n", tamsayi, &tamsayi);
    printf("gercel_sayi deðiþkeninin deðeri= %f, gercel_sayi deðiþkeninin adresi= %u\n", gercel_sayi, &gercel_sayi);
    printf("buyuk_tamsayi deðiþkeninin deðeri= %lld, buyuk_tamsayi deðiþkeninin adresi= %u\n", buyuk_tamsayi, &buyuk_tamsayi);

    return 0;
}
