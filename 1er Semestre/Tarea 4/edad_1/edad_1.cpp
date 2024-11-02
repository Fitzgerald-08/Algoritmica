#include <stdio.h>
#include <conio.h>

int main(){
    int edad, nacimiento;

    printf("Introduzca su fecha de nacimiento: ");
    scanf("%d", &nacimiento);
    edad = 2024 - nacimiento;

    printf("Tienes %d", edad);

    getch();

}
