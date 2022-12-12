#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, fact=1;
    printf("\n Enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\n Factorial of %d is %d", n, fact);
    getch();
}
