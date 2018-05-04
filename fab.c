#include<stdio.h>
#include<stdlib.h>

//Main Function

int main() {
    int n,num=0,rnum=1,i=0,fnum;
    printf("\n Enter the number of Digits you want to see: ");
    scanf("%d", &n);
    while(i!=n){
        fnum=num+rnum;
        printf("%d, ", fnum);
        rnum=num;
        num=fnum;
        i++;
    }
return 0;
}
