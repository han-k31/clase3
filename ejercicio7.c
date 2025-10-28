/* Girón Knepp Hanna Sofía
clase3 programa 7*/

#include <stdio.h>

int main() 
{
    int numero;
    int contador = 0;
    int suma = 0;

    do {
        printf("Introduce un numero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            printf("Has introducido el numero %d\n", numero);
            contador++;
            suma += numero;
        }
    } 
    while (numero != 0);

    printf("Finalizando: Se ha introducido el numero 0\n");
    printf("Cantidad de numeros introducidos: %d\n", contador);
    printf("Suma total de los numeros: %d\n", suma);

    return 0;
}
