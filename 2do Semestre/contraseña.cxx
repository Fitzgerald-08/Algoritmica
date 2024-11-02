#include <iostream>

using namespace std;

int main(){
	int contraseña, x=123;
	
	do {
		cout << "Usuario: Admin\n\nPassword: " << endl;
		cin >> contraseña;
		
		if (contraseña != x){
			cout << "Contraseña incorrecta" << endl;
		}
	} while(contraseña != x);
	cout << "Contraseña correcta" << endl;
	
	return 0;
}