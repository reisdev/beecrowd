#include <iostream>

using namespace std;

int main () {

		
		int n,a,soma=0;
		
		cin >> a >> n;
		
		if (n <=0){
				while( n <= 0 )
			cin >> n;
		}
			
		for ( int i = 1; i <= n; i++) {
			soma+=a;
			a++;			
		}
			
	cout << soma;	
	
return 0;
}
