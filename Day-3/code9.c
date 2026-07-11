//Q9	Write a program to Check whether a number is prime.	

#include <stdio.h>
int main() {
    int n, count = 0;

    printf("Enter any number : \n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        if(n % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        printf("The given number is prime number\n");
    }
    else {
        printf("Not a prime number\n");
    }
}