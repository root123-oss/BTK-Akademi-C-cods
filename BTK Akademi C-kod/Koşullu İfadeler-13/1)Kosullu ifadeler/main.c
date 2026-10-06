#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    printf("1. sayiyi giriniz: ");
    scanf("%d",&sayi1);

    printf("2. sayiyi giriniz: ");
    scanf("%d",&sayi2);

    if(sayi1>sayi2){
        printf("%d daha buyuk",sayi1);
    }
    else if (sayi1<sayi2){
        printf("%d daha buyuk",sayi2);
    }
    else{
        printf("esit");
    }
    return 0;
}
