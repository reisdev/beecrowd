#include <iostream>

using namespace std;


int main () {

	int a;
	int i=0;
	
	while ( i < 10) {
		
		cin >> a;
		
		if ( a <= 0 )
			a = 1;
			
		cout << "X[" << i << "] = " << a << endl;
		
		i++;
	}
		
		
return 0;
}
