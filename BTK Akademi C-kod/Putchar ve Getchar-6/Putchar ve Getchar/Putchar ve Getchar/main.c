#include <stdio.h>
#include <stdlib.h>
/*BTK Akademi Putchar() ve Getchar() fonkisyonlarý ile
çýktý ve girdi iþlemleri*/

int main()
{
    char ogrenci_notu;
    printf("Ogrenci notunu giriniz: ");
    //getchar() komuutu ile notu al ve ogrenci_notu degiskenine sakla
    ogrenci_notu=getchar();

    putchar(ogrenci_notu);
    //putchar komutu ile notu çýktý olarak ver.
    return 0;
}
