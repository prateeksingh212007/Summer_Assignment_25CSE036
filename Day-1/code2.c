//Q2	Write a program to Print multiplication table of a given number.

#include <stdio.h>

int main() {
    int n, table;

    printf("Enter any number : ");
    scanf("%d", &n);
    printf("Table of given no.(%d) is:\n ",n);

    for(int i=1; i<=10; i++) {
        table = n * i;
        printf("%d\n",table);
    }
    

    return 0;
}