#include <iostream>

using namespace std;

int main () {

	int n,casa;
	long long int z=1,y=0,sum=0,fib[60];
	
	for (int i = 0; i < 60 ; i++) {
		
		
		if ( i > 0) {
			sum = y + z;
			fib[i]= sum;
			y = z;
			z = sum;
		}
	}
	fib[0]= 0;
	fib[1]= 1;	
	
	cin >> n;
	
	for ( int j = 0 ; j < n ; j++) {
		
		cin >> casa;
		
		if ( casa == 0 || casa == 1) {
			casa++;
			cout << "Fib(" << casa-1 << ") = " << fib[casa-1] << endl;
		}
		else 
			cout << "Fib(" << casa << ") = " << fib[casa-1] << endl;
	
	}
	
return 0;
}
