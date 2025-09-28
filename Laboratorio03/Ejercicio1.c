#include <stdio.h>

int factorial (int n){
    int i = 1;
    while (n>1)
    {
        i=i*n;
        n = n - 1; // simplemente es de cambiarle la palabra reservada de INT para que este funcione, pues ya viene definindo como int desde el parametro
    }
  return i;  
}
int main(int argc, char *argv[]){
    int numeroacalcular;
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numeroacalcular);
    int facnumeroacalcular = factorial(numeroacalcular);
    printf("El numero que ingreso es: %d y su factorial es: %d\n", numeroacalcular, facnumeroacalcular);
    return 0;
}