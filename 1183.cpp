#include <iostream>
#include <iomanip>

using namespace std;


int main () {

	char S;
	double M[12][12],soma=0,valor;
	
	cin >> S;
	
	for ( int i=0 ; i < 12 ; i++) {
		
		for ( int j=0 ; j < 12 ; j++) {
			
			cin >> valor;
		
			M[i][j] = valor;
		}
		
	}

	for ( int p=0 ; p < 12 ; p++ ) {
		
		for (int k=p+1; k < 12 ; k++) {	
			soma += M[p][k];
		}
	}	
	if ( S == 'S' ) {
		cout << fixed << setprecision(1) << soma << endl;;
	}
	
	else if ( S == 'M' ) {
		
		cout << fixed << setprecision(1) << (soma/66.00) << endl;;
	}
	
return 0;
}
