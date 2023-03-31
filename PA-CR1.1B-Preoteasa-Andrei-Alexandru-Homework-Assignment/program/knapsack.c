#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void generare(int n,int *val,int *profit)
{
    int i;
    srand(time(NULL));
    for(i=0; i<n; i++)
    {
        val[i]=rand()%100+1;
        profit[i]=rand()%100+1;
    }

}
int maxim(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int profit_metoda_1(int C, int *val, int *profit, int n)
{
    int i, v;
    int P[n+1][C+1];
    for (i = 0; i <= n; i++)
    {
        for (v = 0; v <= C; v++)
            if (i==0 || v==0)
                P[i][v] = 0;
            else
                if(v < val[i-1])
                P[i][v] = P[i-1][v];
            else
                P[i][v] = maxim(profit[i-1] + P[i-1][v-val[i-1]],  P[i-1][v]);
    }
    return P[n][C];

}

int profit_metoda_2(int C, int *val, int *profit, int n)
{
    if (n == 0 || C == 0)
        return 0;
    if (val[n - 1] > C)
        return profit_metoda_2(C, val,profit, n - 1);

    else
        return maxim(profit[n - 1] + profit_metoda_2(C - val[n - 1], val,profit, n - 1),profit_metoda_2(C, val, profit, n - 1));

}
