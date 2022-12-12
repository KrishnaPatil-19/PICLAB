#include <stdio.h>
#include <conio.h>
int main()
{
    int n, first=0, second=1, next=0, i;
    printf("\n Enter a Number for Fibonacci Series : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("\t %d", first);
        next=first+second;
        first=second;
        second=next;
    }
    getch();
}
