#include <iostream>

using namespace std;

int main () {

	int t;
	int a,b;
	
	cin >> t;
	
	for ( int i=0 ; i < t ; i++) {
	
	 	
		cin >> a;
		cin >> b;
	
		int sum=0;
		int n = 0;
		
		while (n < b) {
			
			if(a%2 != 0) {
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
