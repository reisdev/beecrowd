#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int x,z=0,sum=0,i=0;
	
	cin >> x;
	
	while (z < x) {
		cin >> z;		
	}
	
	while ( sum < z) {
		sum += x++;
		
		i++;		
	}
	
	cout << i << endl;	
	
return 0;
}
