#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    do
    {
    printf("Enter a number");
    scanf("%d",&n);
    sum = sum + n;
    }
    while(n!= 0);

    printf("the total sum is %d",sum);

        return 0;
}
