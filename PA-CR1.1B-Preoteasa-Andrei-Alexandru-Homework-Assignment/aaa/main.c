#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(n>0){
        n=n-i;
        i++;
    }
    i--;
    printf("%d",i+n);
    return 0;
}
