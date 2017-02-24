#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	signed long long int i;
	signed int a;
	
	cin >> a;

	i=2;
	
	while ( i <= a ) {
		
		cout << fixed << setprecision(0) << i << "^2" << " = " << pow(i,2) << endl;
		
		i += 2;
	}
return 0;	
}
	
