#include <iostream>

using namespace std;

int main()
{
    int nacimiento, edad;

    cout << "Introduce tu fecha de nacimiento: ";
    cin >> nacimiento;

    edad = 2024 - nacimiento;

    cout << "Tu edad es " << edad << endl;

    /* printf("Introduce tu fecha de nacimiento: ");
    scanf("%d",&nacimiento);
    edad = 2024 - nacimiento;

    printf("Tienes %d", edad); */

    return 0;
}
