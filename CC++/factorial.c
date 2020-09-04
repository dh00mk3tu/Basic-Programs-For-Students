#include<stdio.h>
//#include<conio.h>
void main()
{
int i,n,fact=1;
printf("enter the number for the factorial");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    printf("%d",fact);

}
