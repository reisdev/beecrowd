#include <iostream>

using namespace std;

int main () {

	int n,x;
	int menor=0,posmenor;
	
	cin >> n;
	
	int N[n];
	
	for (int i=0; i < n; i++) {
		
		cin >> x;

		if ( x < menor ) {
			menor = x;
			posmenor= i;
		}
		N[i]= x;
	}
	
	cout << "Menor valor: " << N[posmenor] << endl;
	cout << "Posicao: " << posmenor << endl;
	
return 0;
}
