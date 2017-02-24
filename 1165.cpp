#include <iostream>

using namespace std;


int main () {

	int a,t;
	int quantdiv,num;
	
	cin >> t;
	
	for(int i = 0 ; i < t ; i++) {
	
	quantdiv = 0;
	 	
		cin >> a;
		
		num = a;
		
		while ( num > 0 ) {
		
			if ( a%num == 0) {					
				quantdiv++;
				num--;
				
			}
			else
				num--;
		}
		
		if (quantdiv == 2)
			cout << a << " eh primo" << endl;
		else 
			cout << a << " nao eh primo" << endl;
		

	}	
		
	
return 0;
}
