#include <iostream>

using namespace std;

unsigned long long int fat(int n) {
	
	if (n == 0)
		return 1;
		
	unsigned long long int fatorial=1;
	for( int i = n; i > 0; i--){
		fatorial *= i;		
	}
	return fatorial;
}

int main() {
		
	int x=0,y=0,n=0;
	int a[100],b[100];
	
	while (cin >> x) {
		
		a[n] = x;
		
		cin >> y;
		b[n] = y;
		
		n++;
	}
	
	for ( int i = 0; i < n; i++) {
			cout << fat(a[i])+fat(b[i]) << endl;
	}
	
	return 0;	
}


