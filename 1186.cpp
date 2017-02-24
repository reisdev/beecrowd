#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

	char S;
	int M[4][4],soma=0,valor;
	
	cin >> S;
	
	for (int i=0 ; i < 4 ; i++) {
		
		for ( int j=0 ; j < 4 ; j++) {
			
			cin >> valor;
		
			M[i][j] = valor;
		}
		
	}

	for (int p=1 ; p < 4 ; p++) {
		
		for ( int k=4 ; k > 4-p ; k-- ) {	
			soma += M[p][k];
		}	
	}
		
	if ( S == 'S' ) {
		cout << fixed << setprecision(1) << soma << endl;;
	}
	
	else if ( S == 'M' ) {
		
		cout << fixed << setprecision(1) << (soma/66.00) << endl;
	}
	
	cout << fixed << setprecision(0) << endl;
	
	for(int i=0 ; i < 4 ; i++) {
		cout << "[";
		for ( int j=0 ; j < 4 ; j++) {
			
			cout << M[i][j] << " ";
		}
		cout << "]" << endl;
	}
	
return 0;
}
