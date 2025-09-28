#include <stdbool.h>
#include <stdio.h>

int validarNumero(){
    int numero;
    bool ControlVar = true;
    while (ControlVar){
        printf("Ingrese un numero mayor a 1 : ");
        scanf("%d", &numero);
        if (1<=numero){
            printf("Numero registrado con exito!\n");
            printf("\n");
            ControlVar = false;
        }
        else{
            printf("Error, debe de ingresar solo numeros enteros mayores a 1.\n");
            printf("Ingrese un numero valido!\n");
            printf("\n");
        }
    }
    return numero; 
}

bool verificarPrimo(int numero){
    if (numero < 2) return false; 
    for (int i = 2; i * i <= numero; i++){  
        if (numero % i == 0) {
            return false; 
        }
    }
    return true;
}

int main() {
    int numero = validarNumero();
    bool primo = verificarPrimo(numero);
    if (primo) {
        printf("El numero %d es primo\n", numero);
        printf("\n");
    } else {
        printf("El numero %d NO es primo\n", numero);
        printf("\n");
    }
    printf("Fin del codigo con exito!");
    printf("\n");
    return 0;
}