#include <iostream>
#include <iomanip>

using namespace std;


int main () {

	int l;
	char S;
	double M[12][12],soma=0,valor;
	
	cin >> l;
	cin >> S;
	
	for ( int i=0 ; i < 12 ; i++) {
		
		for ( int j=0 ; j < 12 ; j++) {
			
			cin >> valor;
		
			M[i][j] = valor;
		}
	}
	
	for ( int k = 0 ; k < 12 ; k++ ) {	
		soma += M[k][l];
	}
		
	if ( S == 'S' ) {
		cout << fixed << setprecision(1) << soma << endl;;
	}
	
	else if ( S == 'M' ) {
		
		cout << fixed << setprecision(1) << (soma/12.00) << endl;;
	}
	
return 0;
}
