#include <stdio.h>
#include <stdlib.h>
int aparitii(int y,int x[100],int l,int r,int *s)
{
    int m;
    if(l=r)
        if(x[1]==y)
            s+=1;
        else
            s+=0;
    else
    if(r=l+1){
        if(x[r]==y)
            s+=1;
    }
    else
    {
        m=(l+r)/2;
        aparitii(y,x,l,m,s);
        aparitii(y,x,m+1,r,s);
    }
}
int main()
{
    int x[100],i,y,n,*s;
    scanf("%d",&y);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&x[i]);
    printf("%d",aparitii(y,x,1,n,0));
    return 0;
}
