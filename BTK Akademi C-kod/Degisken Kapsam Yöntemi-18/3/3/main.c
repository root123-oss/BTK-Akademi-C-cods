#include <stdio.h>
//BTK Akademi Degisken Kapsam Yonetýmý
/* global deðiþken beyaný (deklarasyonu) */
int a = 20;

/* Verilen iki sayýyý toplayan fonksiyon */
int BaziIslemlerGerceklestir(int a, int b) {

    printf ("a deðiþkeninin BaziIslemlerGerceklestir() fonksiyonu içerisindeki giriþ deðeri = %d\n", a);
    printf ("b deðiþkeninin BaziIslemlerGerceklestir() fonksiyonu içerisindeki giriþ deðeri = %d\n", b);

    a *= 12;
    b += 5;

    printf ("a deðiþkeninin BaziIslemlerGerceklestir() fonksiyonu içerisindeki sonraki deðeri = %d\n", a);
    printf ("b deðiþkeninin BaziIslemlerGerceklestir() fonksiyonu içerisindeki sonraki deðeri = %d\n", b);

    return a + b;
}

int main () {

    /* Lokal deðiþken beyaný (deklarasyonu) */
    int a = 10;
    int b = 20;
    int c = 0;

    printf ("a deðiþkeninin main() içerisindeki deðeri = %d\n", a);
    printf ("b deðiþkeninin main() içerisindeki deðeri = %d\n", b);

    c = BaziIslemlerGerceklestir(a, b);

    printf ("c deðiþkeninin main() içerisindeki deðeri = %d\n", c);

    printf ("a deðiþkeninin main() içerisindeki deðeri = %d\n", a);
    printf ("b deðiþkeninin main() içerisindeki deðeri = %d\n", b);

    return 0;
}
