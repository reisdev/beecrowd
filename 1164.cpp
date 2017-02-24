#include <iostream>

using namespace std;


int main () {

	int a,t;
	int sumdiv=0,num;
	
	cin >> t;
	
	for(int i = 0 ; i < t ; i++) {
		
		cin >> a;
		
		num = a/2;
		
		while ( num > 0 ) {
		
			if ( a%num == 0) {				
				sumdiv+= num;
				num--;
			}
			else 
				num--;
		}
		
		if (sumdiv == a)
			cout << a << " eh perfeito" << endl;
		else 
			cout << a << " nao eh perfeito" << endl;
		
		sumdiv=0;
	}	
		
	
return 0;
}
