#include<stdio.h>
#include<string.h>
//Codul identifica cea mai mare cifra dintr-un numar introdus de la tastaura
int main ()
{
    int x,i1,i2;
    printf("Se citeste x");
    scanf("%d", &x);
     i1=x%10;
    do
    {
        x/=10;
        i2=x%10;
if(i2>i1)
i1=i2;

    }
    while(i2);
    printf("%d",i1);
}