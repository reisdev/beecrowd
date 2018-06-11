#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int n,a=1;
	
	cin >> n;
	
	for ( int i=0; i < n; i++) {
		
		cout << a << " " << a+1 << " " << a+2 << " " << "PUM" << endl;
		
		a+=4;
	}
	
return 0;
}
