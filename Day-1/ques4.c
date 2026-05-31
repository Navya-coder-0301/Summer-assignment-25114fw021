#include <stdio.h>
int main()
{
    int count=0,n,n1;
    printf("Enter a number: ");
    scanf("%d",&n);
    n1=n;
    if(n==0)
    {
        count=1;
    }
    else
    {
        if(n<0)
        {
            n=-n;
        }
        while (n1!=0)
       {
        n1=n1/10;
        count++;
       }
    }
    printf("Number of digits in %d is: %d",n,count);
    return 0;
}