//Q46	Write a program to Write function for Armstrong.

#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, digits = 0, sum = 0, rem;

    while (n != 0) {
        digits++;
        n /= 10;
    }

    n = original;

    while (n != 0) {
        rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }

    return sum == original;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}