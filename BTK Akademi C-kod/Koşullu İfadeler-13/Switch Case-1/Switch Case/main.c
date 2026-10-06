#include <stdio.h>
//BTK Akademi Switch Case örneði
int main() {
    int gun;

    /* Kullanýcýdan, haftanýn kaçýncý günü olduðunun bilgisini al*/
    printf("Günün, haftanýn kaçýncý günü olduðunu giriniz (1-7): ");
    scanf("%d", &gun);

    switch(gun)
    {
        case 1:
            printf("Hafta Ýçi");
            break;
        case 2:
            printf("Hafta Ýçi");
            break;
        case 3:
            printf("Hafta Ýçi");
            break;
        case 4:
            printf("Hafta Ýçi");
            break;
        case 5:
            printf("Hafta Ýçi");
            break;
        case 6:
            printf("Hafta Sonu");
            break;
        case 7:
            printf("Hafta Sonu");
            break;
        default:
            printf("Geçersiz bir gün girdiniz!");
            break;
    }

    return 0;
}
