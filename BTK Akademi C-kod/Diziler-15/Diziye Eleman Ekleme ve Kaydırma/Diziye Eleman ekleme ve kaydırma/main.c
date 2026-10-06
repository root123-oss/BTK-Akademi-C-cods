#include <stdio.h>
#include <stdlib.h>
//BTK Akademi Diziye Eleman Ekleme ve Kaydýrma
int main()
{
    int eklenecek_sayi,eklenecek_i;
    int benimdizim[]={3,4,1,9,6,2,8};
    int boyut=sizeof (benimdizim)/sizeof (benimdizim[0]);

    for (int i=0;i<boyut;i++){
        printf("%d",benimdizim[i]);
    }
    printf("\ndiziye eklenecek elemaný giriniz: ");
    scanf("%d",&eklenecek_sayi);
    printf("sayinin hangi indekse eklenecegini giriniz:");
    scanf("%d",&eklenecek_i);

    for(int i=boyut-1;i>eklenecek_i;i--){
        benimdizim[i]=benimdizim[i-1];
    }benimdizim[eklenecek_i]=eklenecek_sayi;

    for (int i=0; i<boyut;i++){
        printf("%d",benimdizim[i]);
    }

    return 0;
}
