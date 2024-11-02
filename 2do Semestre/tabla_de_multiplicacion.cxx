#include <iostream>

using namespace std;

int main(){
	float multiplo, resultado;
	
	cout << "Introduzca un numero: " << endl;
	cin >> multiplo;
	
	for(int i = 1; i <= 10; ++i){
	    resultado = multiplo * i;
	    
	    cout << resultado << endl;
	}

	return 0;
}