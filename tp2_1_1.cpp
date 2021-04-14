#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define N 4
#define M 5

int main()
{
    int f,c;
    double mt [N] [M];
    srand(time(NULL));
    //genero la matriz
    for ( f = 0; f < N; f++)
    {
        for ( c = 0; c < M; c++)
        {
            mt [f] [c]= 10 + rand() % (100 - 10);
        }
    }
    //Mostrar la matriz
    for ( f = 0; f < N; f++)
    {
        for ( c = 0; c < M; c++)
        {
            printf("  %.2lf", mt [f] [c]);
        }
        printf("\n");  
    }
    
    getchar();
    
    return 0;
}