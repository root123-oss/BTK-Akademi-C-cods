#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// BTK Akademi Union (Birleþim)

union Veri {
    int i;
    float f;
    char str[20];
};

int main() {
    union Veri veri;

    // Union'ýn bellekte kapladýðý toplam alan (En büyük eleman olan 20 byte)
    printf("Verinin buyuklugu: %zu byte\n\n", sizeof(veri));

    veri.i = 10;
    printf("veri.i : %d\n", veri.i);

    veri.f = 220.5;
    printf("veri.f : %.2f\n", veri.f);

    strcpy(veri.str, "C Programlama Kursu");
    printf("veri.str : %s\n", veri.str);

    printf("\n...\n");

    // Yeni bir atama yapýldýðýnda bellekteki string verisi ezilir
    veri.i = 103;
    printf("veri.i guncellendi: %d\n", veri.i);
    // Bu aþamadan sonra veri.str veya veri.f yazdýrýlýrsa anlamsýz deðerler verir.

    return 0;
}
