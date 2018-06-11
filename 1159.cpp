#include <iostream>

using namespace std;


int main () {

	int a;

	while ( true ) {
		
		cin >> a;
		
		if ( a == 0)
			break;
			
		int sum=0;
		int n = 0;
		
		while (n < 5) {
			
			if(a%2 == 0) {
				sum+=a;
				n++;				//n = 4 a = 13; sum =7+9+11+13
				a++;
			}
			else
				a++;
			}
				
	cout << sum << endl;
	}
return 0;
}
