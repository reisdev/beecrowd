#include <iostream>

using namespace std;

int main () {

	long long int a,fat=1;
	
	cin >> a;
	
		while ( a > 0 ) {
			
			fat*=a;			
			
			a--;
		}
		
	cout << fat << endl;
	
return 0;
}
