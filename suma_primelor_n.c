#include <stdio.h>
/*Afisarea sumei primelor n numere. N se introduce de la tastatura*/
int main()
{
int i,n,sum;
sum=0;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}

printf("%d",sum);
}