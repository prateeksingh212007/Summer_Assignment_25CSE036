//Q13	Write a program to Generate Fibonacci series.
//0 1 1 2 3 5 8 . .... .N ----> fibonacci series

#include <stdio.h>
int main() {
    int n;
    int a = 0, b = 1, c;

    printf("Enter the value of n: \n");
    scanf("%d",&n);

    printf("Fibonacci Series: %d %d ",a,b);

    for(int i=2; i<=n; ++i) {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
    return 0;
}