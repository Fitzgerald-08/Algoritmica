#include <iostream>

using namespace std;

int main()
{
    float num, pro;

    cout << "\n" << num << "\n\n" << endl;

    while (num != 0) {
        cout << "Escribe un numero diferente de 0: " << endl;
        cin >> num;
        pro = pro + num;
    }

    cout << "El producto total es " << pro << endl;

    return 0;

}
