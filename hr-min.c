//Name: Anirudh Rath
//Section: A CSE
//Addition two numbers

//Header File
#include<stdio.h>

//Main Function
int main() {
    int a,c,b;
    printf("\n\t Enter the time in Hours: ");
    scanf("%d", &a);
    //In minutes
    b = a*60;
    //In Seconds
    c = (a*60)*60;
    printf("\n\t The time in Minutes to: %d and in Seconds is equal to: %d",b,c);
    return 0;
}
