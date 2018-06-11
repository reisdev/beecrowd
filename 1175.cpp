#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main () {

	int a,i=20;
	int X[20];
	
	while ( i > 0 ) {
	
	cin >> a;
	
	X[i-1] = a;
	
	i--;	
	}
	
	while ( i < 20) {
	
	cout << "N[" << i << "] = " << X[i] << endl;
	
	i++;
	}
	
return 0;
}
