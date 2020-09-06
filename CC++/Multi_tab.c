#include<stdio.h>
//Coded by DH00MK3TU 
//This is the shortest possible program to display Tables of numbers (1-10)
//The code can be edited to display tables of numbers greated than 12 

//Globals
#define c_max 12
#define r_max 10


//Main Function
int main() {
    int r,c,n;
    r=1;
    do{
        c=1;
        do {
            n=r*c;
            printf("%4d",n);
            c+=1;
        }
        while(c<=c_max);
        printf("\n");
        r+=1;
    }
    while(r<=r_max);
return 0;
}
