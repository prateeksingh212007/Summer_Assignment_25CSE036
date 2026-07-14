//Q16	Write a program to Print Armstrong numbers in a range.

#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        int n = i, digits = 0, sum = 0, rem;

        while (n != 0) {
            digits++;
            n /= 10;
        }

        n = i;

        while (n != 0) {
            rem = n % 10;
            sum = sum + (int)round(pow(rem, digits));
            n /= 10;
        }

        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}