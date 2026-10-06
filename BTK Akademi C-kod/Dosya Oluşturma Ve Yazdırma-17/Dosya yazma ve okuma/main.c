#include <stdio.h>
#include <stdlib.h>
//BTK Akademi Dosya Oluþturma ve Okuma
#define Veri_Boyutu 1000
int main()
{
    char veri[Veri_Boyutu];
    FILE * fptr;
    fptr=fopen("dosya1.txt","w+");
    if(fptr==NULL){
        printf("Dosya Oluþturulamadý.\n");
        exit(EXIT_FAILURE);
    }
    printf("Dosya kaydedilecek olan girdiyi al: \n");
    fgets(veri,Veri_Boyutu,stdin);

    fputs(veri,fptr);

    fclose(fptr);

    printf("Dosya baþarýlý bir sekilde olusturuldu ve icerigi kaydedildi...\n");

    return 0;
}
