#include<stdio.h>
//#include<conio.h>

//Main Function
int main() {
    int i,j,k,n;
    printf("\n\tEnter the number of Rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=n; j>=i; j--) {
            printf(" ");
        }
    for(k=1; k<=(2*i-1); k++) {
            printf("%d", k);
        }
    printf("\n");
    }
return 0;
}
