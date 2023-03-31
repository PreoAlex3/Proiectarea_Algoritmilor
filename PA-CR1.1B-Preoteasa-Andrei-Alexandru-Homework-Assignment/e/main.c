#include <stdio.h>
#include <stdlib.h>
int a[100][100];
int main()
{
    int i,j,n,m;
    scanf("%d %d",&m,&n);
    for(j=0; j<=m; j++)
        a[0][j]=1;
    for(i=0;i<=n;i++)
        for(j=i;j<=m;j++)
            if(i==j)
                a[i][j]=1;
            else
                a[i][j]=a[i][j-1]+a[i-1][j-1];
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
