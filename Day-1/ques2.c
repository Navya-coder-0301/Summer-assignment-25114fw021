#include<stdio.h>
int main()
{
    int n,i,res;
    printf ("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        res=n*i;
        printf("%d X %d = %d\n",n,i,res);
    }
    return 0;
}