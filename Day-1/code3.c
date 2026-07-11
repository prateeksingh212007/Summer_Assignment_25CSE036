//Q3	Write a program to Find factorial of a number.

#include<stdio.h>

int main() {

    int n;
    long long fact = 1;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        fact = i * fact;
        }
    printf("Factorial of %d is : %lld",n,fact );

    return 0;
}