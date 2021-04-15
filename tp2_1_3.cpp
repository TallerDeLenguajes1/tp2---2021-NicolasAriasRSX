#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define filas 15

int main()
{
    srand(time(NULL));
    int f,c,res, cont;
    int columnas = 5 + rand() % (15 + 1 -5);
    int mt [filas] [columnas];
    int parVec[15];
    //genero la matriz
    for ( f = 0; f < filas; f++)
    {   
        cont= 0;
        for ( c = 0; c < columnas; c++)
        {   
            mt [f] [c]= 100 + rand() % (1000 - 100);
            res = mt [f] [c] % 2;
            //printf("%d ", res);
            if (res == 0){
                cont++;
            }
            parVec[f]= cont;
        }

    }
    //Mostrar la matriz
    printf("Matriz cargada\n\n");
    for ( f = 0; f < filas; f++)
    {
        for ( c = 0; c < columnas; c++)
        {
            printf("  %.2d", mt [f] [c]);          
        }
        printf("\n");  
    }
    printf("\nvector que contiene la cantidad de pares por fila:\nparVec[]= ");
    for (int i = 0; i < filas; i++)
    {
        printf("%d ", parVec[i]);
    }
    
    
    getchar();
    
    return 0;
}