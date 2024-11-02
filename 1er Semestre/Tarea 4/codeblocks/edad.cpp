#include <iostream>

using namespace std;

int main()
{
    int nacimiento, edad;

    cout << "Introduce tu fecha de nacimiento: ";
    cin >> nacimiento;

    edad = 2024 - nacimiento;

    cout << "Tu edad es " << edad << endl;

    return 0;
}
