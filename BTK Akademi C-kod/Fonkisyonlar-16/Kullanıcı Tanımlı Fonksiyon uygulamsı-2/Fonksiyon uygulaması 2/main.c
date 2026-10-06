#include <stdio.h>
#include <stdlib.h>
//BTK Akademi Sayının kubunu hesaplayan fonksiyon

int sayikubuhesaplama(int sayi){
int kup=sayi*sayi*sayi;
return kup;

}
int main()
{
    int sayi;
    int kup;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    kup=sayikubuhesaplama(sayi);
    printf("%d sayinin kubu=%d",sayi,kup);

    return 0;
}
