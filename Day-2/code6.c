//Q6	Write a program to Reverse a number.

#include <stdio.h>

int main() {
    int num, rem; //rem--> remainder
    int reverse = 0;

    printf("Enter any number: ");
    scanf("%d",&num);

    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    printf("Reverse of the given number is : %d",reverse);

    return 0;
}