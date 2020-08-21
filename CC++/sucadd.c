#include<stdio.h>

//Main Function

int main() {
    int n,i,j,ser=0;
    printf("\nEnter the Limit: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++){
            ser += j;
        }
        printf("%d ,", ser);+

    }
return 0;
}
