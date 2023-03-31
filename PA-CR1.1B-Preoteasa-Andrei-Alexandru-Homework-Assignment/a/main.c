#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s;
    scanf("%d",&n);
    i=1;
    s=0;
    while(s+i<=n)
    {
        s=s+i;
        i=i+1;
    }
    if(s==n)
        printf("%d",i);
    else
        printf("%d",n-s);
    return 0;
}
