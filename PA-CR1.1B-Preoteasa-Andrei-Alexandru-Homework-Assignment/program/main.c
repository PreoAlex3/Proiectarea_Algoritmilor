#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "knapsack.h"
int main()
{
    srand(time(NULL));
    int C,*val,*profit,n,i;
    C=rand()%200+1;
    printf("Capital:%d\n",C);
    n=rand()%20+1;
    printf("Numar oferte:%d\n",n);
    val=(int*)malloc(n*sizeof(int));
    profit=(int*)malloc(n*sizeof(int));
    generare(n,val,profit);
    for(i=0;i<n;i++){
        printf("Oferta %d  valoare: %d  profitul: %d                                                      %.2f\n",i,val[i],profit[i],(float)profit[i]/val[i]);
    }
    printf("Profitul maxim folosind prima metoda 1 :%d\n",profit_metoda_1(C,val,profit,n));
    printf("Profitul maxim folosind prima metoda 2 :%d",profit_metoda_1(C,val,profit,n));
    return 0;
}
