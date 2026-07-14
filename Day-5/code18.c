//Q18	Write a program to Check strong number.

#include <stdio.h>

int main() {
    int n, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        rem = n % 10;
        int fact = 1;

        for (int i = 1; i <= rem; i++)
            fact *= i;

        sum += fact;
        n /= 10;
    }

    if (sum == original)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}