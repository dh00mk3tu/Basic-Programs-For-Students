#include<stdio.h>

//Pascal Triangle
//Main Function
int main() {
    int t,i,j,n,num=1;
    printf("\n\tEnter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
    for(i=0 ;i<=n;i++){
        for(j=1;j<=n-1;j++){
            num=1;
            printf(" ");
        }
        for(t=0;t<=i;t++){
            printf("%d", num);
            num=num*(i-t)/(t+1);
        }
        printf("\n");
    }
    return 0;
}
