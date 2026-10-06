#include <stdio.h>
#include <stdlib.h>
//BTK Akademi if-else ile birlikte sayýnýn negatif veya pozitif oldugunu anlama
int main()
{
    int sayi;

    printf("lutfen bir sayi giriniz:");
    scanf("%d",&sayi);

    if(sayi>0){
        printf("sayi pozitif");
    }
    else if (sayi<0){
        printf("sayi negatif");
    }else{
    printf("sayi 0 dir");
    }
    return 0;
}
