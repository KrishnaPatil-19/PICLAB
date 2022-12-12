#include <stdio.h>
int main()
{
    int n, or, rem, co=0;
    printf("\n Enter the Number : ");
    scanf("%d", &n);
    or=n;
    while(n!=0)
    {
        rem=n%10;
        co=rem+(co*10);
        n=n/10;
    }
    printf("\n The Reversed Number is = %d", co);
    if(or==co)
    {
        printf("\n This Number is a Palindrome.");
    }
    else
    {
        printf("\n The Number is not a Palindrome.");
    }
}
