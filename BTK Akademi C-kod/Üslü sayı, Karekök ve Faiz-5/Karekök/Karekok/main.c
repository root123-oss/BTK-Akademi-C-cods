#include <stdio.h>
#include <stdlib.h>
#include <math.h>//sqrt() fonksiyonu icin
//BTK Akademi Karekökü hesaplayan C kodu
int main()
{
    double sayi,karekok;

    printf("Karekoku hesaplanacak sayiyi giriniz: ");
    scanf("%lf",&sayi);

    //sayinin karekokunu hesaplama
    karekok=sqrt(sayi);

    printf("%.2lf sayinin karekoku = %.2lf",sayi,karekok);

    return 0;
}
