#include<stdio.h>
#include<string.h>
//Codul identifică de cate ori se gaseste o silaba introdus de la tastatura într-o fraza introdusă tot de la tastatură
int main()
{
char str[100], silaba[3];
int count=0,i,nr;
printf("\nIntrodu o fraza:");
gets(str);
nr=strlen(str);
printf("\nIntrodu o silaba formata din 2 litere:");
gets(silaba);
printf("\n%s", silaba);
for(i=0;i<=nr;i++)
if(str[i]==silaba[0])
    if(str[i+1]==silaba[1])
    {
    count++;
    i++;
    }
printf("\nSilaba %s apare de %d ori",silaba,count);
    }