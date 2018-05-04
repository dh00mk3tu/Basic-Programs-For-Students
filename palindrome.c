#include<stdio.h>
//sakshamagg.515@gmail.com
//Main Function
int main() {
    int num, rnum=0, i, c_num;
    printf("\nEnter the number you'd like to check: ");
    scanf("%d", &num);
    c_num = num;
    while(num != 0) {
        rnum = rnum * 10;
        rnum = rnum + num%10;
        num = num/10;
    }
    if(rnum==c_num)
        printf("\nNumber is Palindrome");
    else
        printf("\nNot Palindrome");

return 0;
}
