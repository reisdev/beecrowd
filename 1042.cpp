#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	int a,b,c;
	
	cin >> a >> b >> c;
	
	if ( a < b && a < c) {
		
		cout << a << endl;
		
		if( b < c) {
			
			cout << b << endl;
			cout << c << endl;
		}
		
		else if ( c < b) {
			
			cout << c << endl;
			cout << b << endl;
		}		
	}
	
	if ( b < a && b < c) {
		
		cout << b << endl;
		
		if( a < c) {
			
			cout << a << endl;
			cout << c << endl;
		}
		else if ( c < a) {
			
			cout << c << endl;
			cout << a << endl;
		}
	}
		
	if ( c < a && c < b) {
		
		cout << c << endl;
		
		if( a < b) {
			
			cout << a << endl;
			cout << b << endl;
		}
		else if ( b < a) {
			
			cout << b << endl;
			cout << a << endl;
		}		
	}	
	
	cout << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;

}
