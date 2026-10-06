#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=10;
    int *isaretci;

    isaretci=&sayi;

    printf("sayi degiskeni adresi=%d\n",&sayi);
    printf("sayi degiskeni icreigi= %d\n",sayi);

    printf("isaretci degiskeninin adersi=%d\n",&isaretci);
    printf("isaretci degiskeninin icerigi=%d\n",isaretci);
    printf("isaretci degiskeninin isaret ettigi deger=%d\n",*isaretci);

    return 0;
}
