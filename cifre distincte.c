  #include <stdio.h>
//Codul identifica cate cifre distincte există într-un număr introdus de la tastatura//
 int main() {
  
        int n, c, i=0, count=0;
        int countcifra[10]={0};
        printf("Enter a Number: ");
        scanf("%d", &n);
  
        while(n>0)
        {
c=n%10;
n/=10;
countcifra[c]++;
        }

        while(i<10)
        {
if(countcifra[i]==1)
count++;
i++;

        }

printf("In numar apar %d cifre distincte", count);
    

 } 
