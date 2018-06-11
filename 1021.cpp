#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	double valor,valorrestante;
	int notas[6] = {100,50,20,10,5,2}, moedas[6] = {100,50,25,10,5,1},quant;
		
	cin >> valor;
	
	cout << "NOTAS:" << endl;
	
	valorrestante = valor;
	
	for(int i = 0 ; i < 6 ; i++ ) { 
		quant = (int)valorrestante/notas[i];
		cout << quant << " nota(s) de R$ " << fixed << setprecision(2) << notas[i]*1.00 << endl;
		valorrestante -= (quant*notas[i]);
	}
	
	valorrestante *= 100;
	cout << "MOEDAS:" << endl;
	
	for(int i = 0 ; i < 6 ; i++ ) {
		quant = valorrestante/moedas[i];
		cout << quant << " moeda(s) de R$ " << fixed << setprecision(2) <<((double)moedas[i]/100)<< endl;
		valorrestante -= (quant*moedas[i]);
	}
		
return 0;
}
