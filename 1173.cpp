#include <iostream>

using namespace std;


int main () {

	int a;
	int i=0;
	
	cin >> a;
	
	while ( i < 10) {
		
		cout << "N[" << i << "] = " << a << endl;
		
		a*=2;
		i++;
	}
		
		
return 0;
}
