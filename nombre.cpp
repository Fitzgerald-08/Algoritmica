#include <iostream>

using namespace std;

int main(){
    char nombre[20], apellido[20];

    cout << "Introduzca su nombre: ";
    cin >> nombre;

    cout << "Introduzca su apellido: ";
    cin >> apellido;

    cout << "Hola " << nombre << " " << apellido;



    /* printf("Introduzca su nombre: ");
    scanf("%s", nombre);
    printf("Introduzca su apellido: ");
    scanf("%s", apellido);
    printf("Hola %s %s, buenos días.", nombre, apellido); */

    return 0;
}
