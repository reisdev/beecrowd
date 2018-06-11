#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	long long soma=0,a,b,i;

	cin >> a >> b;
	
	for ( i = a ; i <= b; i++){
		soma+=i;
	}
	
	cout << soma << endl;
	
return 0;
}
