#include <stdio.h>
#include <stdbool.h>
#define SIZE 3
#include<stdlib.h>
#include <time.h>


int findLargestLine(int matrix[][SIZE]){
    //variables que van a contener los valores N de las columnas y filas
    int valores_filas[SIZE];
    int valores_columnas[SIZE];
    // definimos una variable para el valor de cada entrada
    int entrada_fila=0;
    int entrada_columna=0;
    //definimos las variables para los valores de las entradas de las diagonales
    int diagonal_1=0;
    int diagonal_2=0;
    
    //iniciamos a recorrer las filas de la matriz
    for (int i = 0; i < SIZE; i++)
    {
        // ininciamos a recorrer cada entrada de las filas
        for (int j = 0; j < SIZE; j++)
        {
            //agregamos los valores de la fila i en la posicion j a la variable sumadora de esta
            entrada_fila += matrix[i][j];
            //Agregamos los valores de la columna j en la posicion i a la variable sumadora de esta
            entrada_columna += matrix[j][i];

            //Si los valores de i y j son iguales entonces es un valor de la primer diagonal
            if (i==j)
            {
                diagonal_1 += matrix[i][j];
            }
            if (i==j && j==SIZE-i)
            {
                diagonal_2 += matrix[i][j];
            }
            
            
        }
        //agregamos los valores de cada fila al array de valores
        valores_filas[i]+= entrada_fila;
        //definimos nuevamente la entrada en cero para que esta variable sea utilizada sin arrastrar los valores de las filas anteriores
        entrada_fila = 0;
        //agregamos los valores de cada columna al array de valores
        valores_columnas[i] += entrada_columna;
        //definimos nuevamente la entrada en cero para que esta variable sea utiliza sin arrastrar los valores de las columnas anteriores
        entrada_columna = 0;
        
        
    }    
        //verificamos si los resultados son iguales en todas las sumas de las filas, columnas y  diagonales
        int target = valores_filas[0];

        for (int i = 0; i < SIZE; i++) {
            if (valores_filas[i] != target && valores_columnas[i] != target) {
                return false;
            }
        }

    if (diagonal_1 != target && diagonal_2 && target) {
        return false;
    }

    return true;    
}



int main(){

    int matrix[SIZE][SIZE];

    //con esto iniciamos es geneardor basado en el tiempo de la maquina
    srand(time(NULL));
    //llenamos la matriz entrada por entrada
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            //el rango no se especifica en el enunciado, pero lo definimos en de 1 a 100
            matrix[i][j] = (rand() % 100) + 1;
        }
        
    }
    
    // definimos la variable que nos indicara si es una matriz con la condicion que queremos
    bool magico = findLargestLine(matrix);
    //verificamos si la matriz es un cadrado magico
    if (magico == true)
    {
        printf("La matriz utilizada corresponde a: \n\n");
        //acontinuacion se imprime los valores entrada por entrada de la matriz en la pantalla
        for (int l = 0; l < SIZE; l++)
        {
            for (int m = 0; m < SIZE; m++)
            {
                printf("%d ", matrix[l][m]);
            }
            printf("\n");
        }
        printf("\nLa matriz es un cuadrado magico.\n");
    }
    // sino mostramos la matriz que se evaluo y se indica en la pantalla que la matriz no cumple con los requisitos
    else
    {
        printf("La matriz utilizada corresponde a: \n\n");
        for (int l = 0; l < SIZE; l++)
        {
            for (int m = 0; m < SIZE; m++)
            {
                printf("%d ", matrix[l][m]);
            }
            printf("\n");
        }
        printf("\nLa matriz NO es un cuadrado magico.\n");
    }
    

    
    
    
    return 0;
}