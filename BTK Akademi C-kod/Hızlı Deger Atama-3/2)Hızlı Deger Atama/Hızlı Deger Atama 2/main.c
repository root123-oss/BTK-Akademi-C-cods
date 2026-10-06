#include <stdio.h>
#include <stdlib.h>
/* C programlama dilinde ++ operatörünün iþleyiþi */
int main()
{
    int i;

    i=0;
    printf("%d\n",i);
    printf("%d\n",i++);//Önce mevcut deger yazýlaccak,sonra artýrýlacak.
    printf("%d\n",i);
    printf("%d\n",++i);//Önce deðer artýrýlacak,sonra yazdýrma iþlemi yapýlacak.
    printf("%d\n",i);

    return 0;

}
