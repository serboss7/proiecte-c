//media aritmetica a patratelor perfecte aflate intre 2 numare introduse de la tastatura
#include<stdio.h>
int main()
{
int numere[100],a,b,copie_a, i, count=0,sum=0,n;
float suma, counter, result;
printf("Se citeste numarul a de la tastatura:");
scanf("%d",&a );
printf("Se cite;te numarul b de la tastatura:");
scanf("%d",&b );
copie_a=a;
for(i=0;i<=(b-copie_a);i++)
{
numere[i]=a;
a++;

}
for(i=0;i<=(b-copie_a);i++)
for(n=1;n<b;n++)
if(numere[i]==n*n)
{
sum+=numere[i];
count++;
}

suma=sum;
counter=count;
result=suma/counter;
printf("\nSuma patratelor perfecte este %d",sum);
printf("\nIn total sunt %d patrate perfecte", count);
printf("\nMedia aritmetica a patratelor perfecte este %f", result);
}