#include <stdio.h>
//BTK Akademi Basit hesap makinesi
int main()
{
    char islem;
    float sayi1, sayi2, sonuc=0.0f;

    /* Karþýlama mesajý yazdýr */
    printf("BASÝT HESAP MAKÝNESÝ UYGULAMASI\n");
    printf("-------------------------------\n");
    printf("Lütfen [sayý 1] [+ - * /] [sayý 2] giriniz\n");

    /* Ýki sayýyý ve iþlem iþaretini kullanýcýdan al */
    scanf("%f %c %f", &sayi1, &islem, &sayi2);

    /* Ýþlem iþaretine göre faaliyet gerçekleþtir */
    switch(islem)
    {
        case '+':
            sonuc = sayi1 + sayi2;
            break;

        case '-':
            sonuc = sayi1 - sayi2;
            break;

        case '*':
            sonuc = sayi1 * sayi2;
            break;

        case '/':
            sonuc = sayi1 / sayi2;
            break;

        default:
            printf("Geçersiz iþlem!...");
    }

    /* Sonuçlarý yazdýr */
    printf("%.2f %c %.2f = %.2f", sayi1, islem, sayi2, sonuc);

    return 0;
}
