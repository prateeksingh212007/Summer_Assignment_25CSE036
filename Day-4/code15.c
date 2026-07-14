//Q15	Write a program to Check Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (original != 0) {
        original = original / 10;
        ++digits;
    }

    original = n;

    while (original > 0) {
        remainder = original % 10;
        sum = sum + (int)round(pow(remainder, digits));
        original = original / 10;
    }

    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}