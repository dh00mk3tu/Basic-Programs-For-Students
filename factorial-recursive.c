#include <stdio.h>
//#include<dos>
long int factorial(int n);

int main()
{
    int n;
    printf("\n\tEnter a positive integer: ");
    scanf("%d", &n);
    printf("\n\tFactorial of %d = %ld", n, factorial(n));
    return 0;
}
long int factorial(int n)
{
    if (n >= 1)
        return n*factorial(n-1);
    else
        return 1;
}
