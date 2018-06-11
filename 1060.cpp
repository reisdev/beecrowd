#include <iostream>

using namespace std;

int main() {

	int i=0,p=0;
	float a;
	
	while (i < 6) {
		
		cin >> a;
		
		if ( a > 0 ) {
			p++;
		}
		i++;
	}
	
	cout << p << " valores positivos" << endl;
	
	return 0;

}
