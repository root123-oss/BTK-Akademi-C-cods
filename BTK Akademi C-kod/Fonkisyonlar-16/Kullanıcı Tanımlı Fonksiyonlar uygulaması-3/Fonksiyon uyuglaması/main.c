#include <stdio.h>

//  BTK Akademi Asal olup olmadýðýný kontrol eden fonksiyon

int asalMi(int sayi) {
    if (sayi < 2) {
        return 0;
    }

    for (int i = 2; i * i <= sayi; i++) {
        if (sayi % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int sayi;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (asalMi(sayi) == 1) {
        printf("%d bir asal sayidir.\n", sayi);
    } else {
        printf("%d bir asal sayi degildir.\n", sayi);
    }

    return 0;
}
