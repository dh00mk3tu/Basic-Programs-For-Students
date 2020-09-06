//Name: Anirudh Rath

//Addition two numbers

//Header File
#include<stdio.h>

//Main Function
int main() {
    int n;
    printf("\n\t Enter the number you want to check: ");
    scanf("%d", &n);
    if(n==0) {
        printf("\n\t The number is Zero");
        }
        else if (n<0)
            printf("\n\t The number is Negative");

        else
            printf("\n\t The number is Positive");

    return 0;
}
