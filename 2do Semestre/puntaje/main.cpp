#include <iostream>

using namespace std;

int main()
{
    int puntaje, resultado;
    string letra;

    cout << "Introduce un numero del 1-100:" << endl;
    cin >> puntaje;

    resultado = (puntaje / 10);

    switch (resultado){
    case 10:
    case 9:
        letra = "A";
        cout << letra << endl;
        break;
    case 8:
        letra = "B";
        cout << letra << endl;
        break;
    case 7:
        letra = "C";
        cout << letra << endl;
        break;
    case 6:
        letra = "D";
        cout << letra << endl;
        break;
    default:
        letra = "F";
        cout << letra << endl;
    }

    return 0;
}
