//Name: Anirudh Rath

//Addition two numbers

//Header File
#include<stdio.h>

//Main Function
int main() {
    int a,c,b;
    printf("\n\t Enter the two number you want to swap: ");
    scanf("%d%d", &a,&b);
    printf("A = %d and B = %d",a,b);
    c=a;
    a=b;
    b=c;
    //After Swapping
    printf("\n\t After swapping A = %d and B = %d", a,b);
    return 0;
}
