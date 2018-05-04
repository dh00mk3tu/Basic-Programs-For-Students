#include<stdio.h>
#include<stdlib.h>
/*#include<iomanip>
  Coded By: Anirudh Rath | DH00MK3TU
  Changing the code won't make you a programmer
  Trident Labs
  Find me on GitHub :) */


//Function Prototypes

void fab_even();
void fab_odd();
void fab_prime();

//Main Function

int main() {
    int ch;
    printf("\n\t\t\v Coded By: Anirudh Rath | DH00MK3TU");
    printf("\n\t\t\v Trident Labs");
    printf("\n\n\tPlease select and Option");
    printf("\n\t\t1. Even Constraint \n\t\t2. Odd Constraint \n\t\t3. Prime Constraint \n\t\t4. Exit");
    printf("\n\tSelection(1-4): ");
    scanf("%d", &ch);
    switch(ch){
        case 1 : printf("\n\t Even Contraint");
                 fab_even();
                 break;
        case 2 : printf("\n\t Odd Constraint");
                 fab_odd();
                 break;
        case 3 : printf("\n\t Prime Constraint");
                 fab_prime();
                 break;
        case 4 : printf("\n\t Exiting!");
//                 exit 0;
                 break;
        default : printf("\n\t Invalid Choice!");
                  break;
    }
return 0;
}

//Functions
//Even Constraints
void fab_even() {
    int n,fnum,num=0,rnum=1,i=0;
    printf("\n\tEnter the number of digits you want: ");
    scanf("%d", &n);
      while(i!=n){
        fnum=num+rnum;
        if(fnum%2==0) {
            printf("%d, ", fnum);
        }
        rnum=num;
        num=fnum;
        i++;
    }
}

//Odd Constraint
void fab_odd() {
    int n,fnum,num=0,rnum=1,i=0;
    printf("\n\tEnter the number of digits you want: ");
    scanf("%d", &n);
      while(i!=n){
        fnum=num+rnum;
        if(fnum%2!=0) {
            printf("%d, ", fnum);
        }
        rnum=num;
        num=fnum;
        i++;
    }
}

//Prime Constraint
void fab_prime() {
    int n,j,fnum,num=0,flag=0,rnum=1,i=0;
    printf("\n\tEnter the number of digits you want: ");
    scanf("%d", &n);
      while(i!=n){
        fnum=num+rnum;
        for(j=1;j<=9;j++){
            if(fnum%j==0) {
                flag+=1;
            }
            else
                break;
        }
        if(flag<=2){
            printf("%d",fnum);
        }
        rnum=num;
        num=fnum;
        i++;
    }
}
