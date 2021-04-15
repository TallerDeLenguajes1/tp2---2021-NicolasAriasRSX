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
    double *ptr= &mt [0][0]; //Declaro un puntero que apunta a la matriz.
    srand(time(NULL));
    //genero la matriz
    for ( f = 0; f < N; f++)
    {
        for ( c = 0; c < M; c++)
        {
           *(ptr + f * M + c) = 10 + rand() % (100 - 10);
        }
    }
    //Mostrar la matriz
    for ( f = 0; f < N; f++)
    {
        for ( c = 0; c < M; c++)
        {
            printf("  %.2lf", *(ptr + f * M + c));
        }
        printf("\n");  
    }
    
    getchar();
    
    return 0;
}