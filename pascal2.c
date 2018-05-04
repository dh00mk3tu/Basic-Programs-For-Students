#include<stdio.h>

//Main Function
int main() {
    int i,j,pr,pat[100],n;
    printf("\n\tEnter the number of Rows: ");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        //printf("1");
        for(j=0;j<=i;j++){
            printf("1");
            pr=pat[j]+pat[j+1];
            printf("%d", pr);
            printf("1");
        }
        printf("\n");
    }
return 0;
}
