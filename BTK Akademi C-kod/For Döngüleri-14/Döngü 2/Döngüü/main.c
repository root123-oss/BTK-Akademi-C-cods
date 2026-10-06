#include <stdio.h>
#include <stdlib.h>
//BTK Akademi C programlama dili ile carpým tablosu olusturma
int main()
{
    int sayi,i;
    printf("Carpým tablosu olusturulacak sayiyi giriniz:");
    scanf("%d",&sayi);

    for (i=1;i<=10;i++){
        printf("%d * %d= %d\n",sayi,i,(sayi*i));

    }
    return 0;
}
