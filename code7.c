//Q7	Write a program to Find product of digits.

#include <stdio.h>

int main() {
    int a,b;

    printf("Enter the values of a and b: \n");
    scanf("%d\n%d",&a,&b);

    int product = a * b;

    printf("Product of the two digits: %d",product);

    return 0;
}