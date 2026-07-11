//Q10	Write a program to Print prime numbers in a range.

#include <stdio.h>
int main() {
    int start,end,count;

    printf("Enter the starting value : \n");
    scanf("%d",&start);

    printf("Enter the ending value : \n");
    scanf("%d",&end);

    for(int i=start; i<=end; i++) 
    {
        count = 0;
        for(int j=1; j<=i; j++) 
        {

            if(i % j == 0) {
                count++;
            }
        }
        if(count == 2) 
        {
        printf("Prime number: %d \n",i);
        }
    }
    return 0;
}