//Name: Anirudh Rath
//Section: A CSE
//Addition two numbers

//Header File
#include<stdio.h>

//Main Function
int main() {
    int a,b,c,ch;
    float d;

    printf("\n\t Enter the two Numbers: ");
    scanf("%d%d", &a,&b);
    printf("\n\t Now please select an option: ");
    printf("\n\t 1. Addition \n\t 2. Subtraction \n\t 3. Multiplication \n\t 4. Division \n\t 5. Exit \n\t\t");
    scanf("%d", &ch);

    //Switch Case
    switch(ch) {
    case 1 : c=a+b;
    printf("\n\t Sum Is: %d",c);
    break;

    case 2 : c=a-b;
    printf("\n\t Subtraction: %d", c);
    break;

    case 3 : c=a*b;
    printf("\n\t Product: %d", c);
    break;

    case 4 : d=a/b;
    printf("\n\t Division: %f", d);
    break;

    case 5 : //Exit
    printf("\n\tEXITING!\n\t Press anykey to continue");
    break;

    default : printf("\n\t Invalid Option!");
    break;
    }
return 0;
}
