#include <stdio.h>
#include <stdlib.h>
int faktoryelhesapla(int n);

int main()
{
    int deger=15;
    printf("%d!=%d\n",deger,faktoryelhesapla(deger));
    return 0;
}
int faktoryelhesapla(int n){
int f;
if(n==1)
f=1;
else f=n*faktoryelhesapla(n-1);
return f;
}
