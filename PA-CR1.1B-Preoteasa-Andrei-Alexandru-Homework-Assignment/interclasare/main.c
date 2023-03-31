#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],c[200],i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        scanf("%d",&b[i]);
    i=k=j=1;
    while(i<=n && j<=n)
        if(a[i]<b[j]){
        c[k]=a[i];
        k++;
        i++;
    }
    else
    {
        c[k]=b[j];
        k++;
        j++;
    }
    while(i<=n)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<=n)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    /*for(i=1;i<k;i++)
        printf("%d ",c[i]);
        */
    printf("%d",c[n]);
    return 0;
}
