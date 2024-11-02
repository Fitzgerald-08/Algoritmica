#include <stdio.h>

using namespace std;

int main() {
    int num1, num2, resultado;
    char operacion;
    
    printf("Introduzca el primer numero: ");
    scanf("%d", &num1);
    
    printf("Introduzca otro numero: ");
    scanf("%d", &num2);
    
    printf("Operacion (+ , -, x, /): ");
    scanf(" %c", &operacion);
    
    if (operacion == '+') {
        resultado = num1 + num2;
        printf("El resultado es: %i\n", resultado);
    } else if (operacion == '-') {
        resultado = num1 - num2;
        printf("El resultado es: %i\n", resultado);
    } else if (operacion == 'x') {
        resultado = num1 * num2;
        printf("El resultado es: %i\n", resultado);
    } else if (operacion == '/') {
        resultado = num1 / num2;
        printf("El resultado es: %i\n", resultado);
     }

    return 0;
}
