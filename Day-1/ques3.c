#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Enter a positive number");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d",n,fact);
    return 0;

}