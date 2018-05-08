#include<stdio.h>

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
