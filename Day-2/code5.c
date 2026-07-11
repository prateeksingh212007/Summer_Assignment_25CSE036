//Q5	Write a program to Find sum of digits of a number.

#include <stdio.h>

int main() {
    int a,b;

    printf("Enter the values of a and b : \n");
    scanf("%d\n%d",&a,&b);

    int sum = a + b;
    printf("Sum of the given digits : %d",sum);

    return 0;
}