#include<stdio.h>
//Codul raelizeaza sirul lui Fibonaci din N numare introduse.N este introdus de la tastatura
int main()
{
int N,a=1,b=1,afisate,c;
printf("Citeste N:");
scanf("%d", &N);
printf("%d ",a);
printf("%d ",b);
afisate=2;
while(afisate<N)
{
c=a+b;
printf("%d ", c);
a=b;
b=c;
afisate++;
}
}