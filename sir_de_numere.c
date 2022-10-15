#include<stdio.h>
//Se citeste un sir de "n" numere reale. Sa se afiseze suma acestor numere și valoarea maxima din sir
int main()
{
int n,i=0 ;
float a[20],sum=0, max;
printf("Cate numere va avea sirul tau?:");
scanf("%d", &n);
while(i<n)
{
printf("a[%d]=", i);
scanf("%f", &a[i]);
 
i++;
}
for(i=0;i<n;i++)
{
    printf("\na[%d]=%f",i,a[i]);
sum+=a[i];
}
max=a[0];
for(i=0;i<n;i++)
{
  if(a[i]>max)
max=a[i];
}
printf("\nmaximul este %f", max);
printf("\nsuma numerelor din sirul tau este %.2f", sum);
}