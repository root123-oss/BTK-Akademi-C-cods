#include <stdio.h>
#include <stdlib.h>
//BTK Akademi Fonksiyon
int Sayiciftmi(int sayi){
if ((sayi%2)==0)
    return 1;
else
    return 0;
}

int main()
{
    int sayi;
printf("Lutfen bir sayi giriniz: ");
scanf("%d",&sayi);

if(Sayiciftmi(sayi)){
       printf("Bu sayi cift");
   }
   else {
    printf("Bu sayi tek");
   }
    return 0;
}
