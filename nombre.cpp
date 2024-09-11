/* #include <conio.h>
#include <stdio.h> */
#include <cstdio> /* Las dos librerias de arriba fueron sustituidas por <cstdio> */

using namespace std;

int main(){
    char nombre[20], apellido[20];

    printf("Introduzca su nombre: ");
    scanf("%s", nombre);
    printf("Introduzca su apellido: ");
    scanf("%s", apellido);
    printf("Hola %s %s, buenos d%cas.", nombre, apellido, 161); /* El numero 161 es un codigo para el caracter í */

    return 0;
}
