#include <iostream>
#include <iomanip>

using namespace std;


int main () {

	int a=0;
	int gas=0,die=0,alc=0;
	
	while (a!=4) {
		
		cin >> a;
		
		if ( a == 1)
			alc++;
		if ( a == 2)
			gas++;
		if ( a == 3)
			die++;
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alc << endl;
	cout << "Gasolina: " << gas << endl;
	cout << "Diesel: " << die << endl;
		
	
return 0;
}

