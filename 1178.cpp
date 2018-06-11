#include <iostream>
#include <iomanip>

using namespace std;


int main () {

	double n;
	double N[100];
	
	cin >> n;
	
	for (int i=0; i < 100; i++) {
		
		N[i] = n;
		
		cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
		
		n /= 2;
	}
return 0;
}
