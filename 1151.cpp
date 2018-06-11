#include <iostream>

using namespace std;

int main () {

	int n,z=1,y=0;
	int sum=0;
	
	cin >> n;
	
	cout << y << " ";
	cout << z << " ";
	
	for (int i = 0; i < (n-2) ; i++) {
		sum = y + z;	
		if ( i == (n-3))
			cout << sum << endl;
		else
			cout << sum << " ";
		y = z;
		z = sum;
	}	
	
return 0;
}
