#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "Grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << celsius << " grados celsius son " << fahrenheit << " grados fahrenheit" << endl;

    return 0;
}
