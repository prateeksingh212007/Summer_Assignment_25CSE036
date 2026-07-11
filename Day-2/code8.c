//Q8	Write a program to Check whether a number is palindrome. eg 1331 -> 1331

#include <stdio.h>

int main() {
    int num,original;
    int rem, rev = 0; //rem-->remainder  rev-->reverse.

    printf("Enter any number : \n");
    scanf("%d",&num);

    original = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(original == rev) {
        printf("%d is Palindrome number.\n",original);
    } else {
        printf("%d is not a Palindrome number.\n",original);
    }

    return 0 ;
}