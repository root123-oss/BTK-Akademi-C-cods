#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ana_para,zaman,faiz_orani,faiz_miktari;

    printf("Ana para miktarini giriniz: ");
    scanf("%f",&ana_para);

    printf("zamani giriniz: ");
    scanf("%f",&zaman);

    printf("Faiz oranini giriniz: ");
    scanf("%f",&faiz_orani);

    faiz_miktari=(ana_para*zaman*faiz_orani)/100;
    printf("Basit faiz hesabý ile hesaplanan faiz mikatri = %f",faiz_miktari);

    return 0;
}
