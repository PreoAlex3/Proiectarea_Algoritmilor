#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[100],n,i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s[i]=0;
    s[1]=1;
    for(i=2;i<=n;i++)
    for(k=1;k<i;k++)
        s[i]=s[i]+s[k]*s[i-k];
    for(i=1;i<=n;i++)
        printf("%d ",s[i]);
    return 0;
}
