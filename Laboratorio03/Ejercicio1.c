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
    printf("Ingrese un numero para calcular su factorial: ");// se le solicita al usuario un numero
    scanf("%d", &numeroacalcular);// se guarda ese numero 
    int facnumeroacalcular = factorial(numeroacalcular);// se calcula el factorial de este numero con la funcion previamente definida
    printf("El numero que ingreso es: %d y su factorial es: %d\n", numeroacalcular, facnumeroacalcular);// se muestar en pantalla el numero registrado y el valor de su factorial
    return 0;
}