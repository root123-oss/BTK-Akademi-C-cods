#include <stdio.h>
#include <stdlib.h>

int main()
{
    int benimdizim[]={3,8,1,7,2,9,5,4};
    int en_buyuk_deger=benimdizim[0];

    int boyut=sizeof (benimdizim)/sizeof (benimdizim[0]);//C dilinde dizinin kaç elemanlý oldugunu bulmak için kullanýlýr
    for (int i=0;i<boyut;i++){
        if(benimdizim[i]>en_buyuk_deger){
            en_buyuk_deger=benimdizim[i];

        }
    }
    printf("en buyuk eleman=%d ",en_buyuk_deger);
    return 0;
}
