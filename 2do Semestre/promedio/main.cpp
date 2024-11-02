#include <stdio.h>
#include <conio.h>

int main(){
    float num1, num2, num3, promedio;

    printf("Ingresa primer calificacion: ");
    scanf("%f", &num1);
    
    printf("Ingrese segunda calificacion: ");
    scanf("%f", &num2);
    
    printf("Ingrese tercera calificacion: ");
    scanf("%f", &num3);
    
    promedio = (num1 + num2 + num3) / 3;

    if(promedio > 6)
        printf("Aprobado, tu calificacion final es de %f", promedio);

    else
        printf("Reprobado, tu calificacion final es de %f", promedio);

    return 0;
}
