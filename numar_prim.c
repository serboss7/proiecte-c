#include <stdio.h>
//codul verifică daca numarul introdus de la tastatura este prim sau nu
int main()
{
int n, d=2, prim=1;
printf("Introdu un numar");
scanf("%d", &n);
do
{
    if((n%d==0) && (n!=2))
    {
prim=0;
break;
    }
    d++;

    } while (d<(n/2) && (prim==1));
if(prim==0)
printf("%d nu este un numar prim\n", n);
else
{
    printf("%d este prim\n", n);
}
}