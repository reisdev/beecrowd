#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

	int j;
	long long int n=1;
	
	cin >> j;
	
	for (int i=0; i < j; i++) {
		
		cout << fixed << setprecision(0) << n << " " << pow(n,2) << " " << pow(n,3) <<endl;
		cout << fixed << setprecision(0) << n << " " << pow(n,2)+1 << " " << pow(n,3)+1 <<endl;
		
		n++;
	}
	
return 0;
}
