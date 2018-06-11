#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int a,b,soma=0;
	
	cin >> a;
	cin >> b;
	
	if ( a > b) {
		
		while ( a >= b) {
			
			if ( a%13 != 0) {
				soma += a;
			}
			a--;
		}		
	}
	else if ( b > a) {
			
		while ( b >= a) {
			if (  b%13 != 0) {
				soma += b;
			}
		b--;
		}
	}
	
	cout << soma << endl;;
return 0;
}
