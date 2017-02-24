	#include <iostream>
	#include <iomanip>

	using namespace std;

	int main() {

		int i=0;
		float a,p=0,z=0;
		
		while ( i < 6) {
			
			cin >> a;
			
			if ( a > 0) {
				z += a;				
				p++;
			}			
			i++;		
		}
			
		cout << p << " valores positivos" << endl;
		cout << fixed << setprecision(1) << float(z/p) << endl;
		
	return 0;
			
	}
