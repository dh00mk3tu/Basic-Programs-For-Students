//Name: Anirudh Rath

//Addition two numbers

//Header File
#include<stdio.h>

//Funtion Prototype
int avg(int x);

//Main Function
int main() {
    int n,aver;
    printf("\n\t Enter the number of Elements: ");
    scanf("%d", &n);
    aver = avg(n);

    printf("\n\t The average of the numbers is: %d", aver);
}

//Function
int avg(int x) {
    int k,sum=0;
    k=x;
    if(x!=0){
        scanf("%d", &sum);
        sum += sum;
        avg(x-1);
        return sum/k;
    }
}
