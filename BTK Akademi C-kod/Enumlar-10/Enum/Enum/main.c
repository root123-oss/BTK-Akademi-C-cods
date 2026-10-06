#include <stdio.h>
#include <stdlib.h>
//BTK Akademi Enumlar

enum Seviyeler{
Dusuk=10,
Orta=20,
Yuksek=30
};

int main()
{
//Numaralandýrýlmýs tipte bir degisken tanýmlama ve deger atama
enum Seviyeler Odasicakligi=Dusuk;
printf("Oda sicakligi:%d\n ",Dusuk);

    return 0;
}
