#include <stdio.h>
#include <stdlib.h>
int s=0;
int alg(int n,int x)
{
    if(n==0)
        return 0;

        if(n%2==0)
    {
        return alg(n/2,x)+alg(n/2,x);
    }
    else{
        return x+alg((n-1)/2,x)+alg((n-1)/2,x);
    }
}
int main()
{
    int x;
    printf("%d",alg(14,1));
    return 0;
}
