#include <iostream>

using namespace std;

int main () {

	int x,m;
	long long int y,n=1;
	
	cin >> x;
	cin >> y;
	
	while ( n < y ) {
		
		m=0;
		
		while ( m < x && n <= y) {
			if ( m==0 ) 
				cout << n;
			else {
		cout << " " << n;
		}
		m+=1;
		n+=1;

		}
		cout << endl;
	
	n-=3;
	n+=3;
	}
	
return 0;
}
