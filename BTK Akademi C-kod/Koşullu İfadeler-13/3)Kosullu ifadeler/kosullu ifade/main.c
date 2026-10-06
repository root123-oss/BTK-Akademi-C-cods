#include <stdio.h>
#include <stdlib.h>
//BTK Akademi C programlama kosullu ifade
int main()
{
    int sayi1,sayi2,sayi3,maksimum;
    printf("lutfen 3 adet sayi giriniz:");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);

    if ((sayi1>sayi2) && (sayi1>sayi3)){
        maksimum=sayi1;
    }else if ((sayi3>sayi1) && (sayi3>sayi2)){
              maksimum=sayi3;}

              else{
                maksimum=sayi2;
              }
              printf("3 sayinin içerisinde en buyuk deger=%d",maksimum);

    return 0;
}
