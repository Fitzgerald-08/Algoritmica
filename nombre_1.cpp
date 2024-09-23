#include <stdio.h>
#include <conio.h>

int main(){
    char nombre[20], apellido[20];

    printf("Introduzca su nombre: ");
    scanf("%s", nombre);

    printf("Introduzca su apellido: ");
    scanf("%s", apellido);

    printf("Hola %s %s", nombre, apellido);

    getch();
}
