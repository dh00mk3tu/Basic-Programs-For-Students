#include<stdio.h>

//Main Function
int main() {
    int i,j,num,k;
    printf("\n\tEnter the Number of Rows: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++) {
        for(j=1;j<=i;j++){
            printf("%d", i);
        }
		printf("\n");
    }
    return 0;
}
