#include <iostream>

using namespace std;

int main() {

	long int a,i=0,testes;
	
	cin >> testes;
	
	while ( testes > i) {
		
		cin >> a;
		
		if ( a == 0 )
			cout << "NULL" << endl;		
		else if ( a%2 == 0 && a > 0)
			cout << "EVEN POSITIVE" << endl;
			
		else if ( a%2 == 0 && a < 0)
			cout << "EVEN NEGATIVE" << endl;
			
		else if ( a%2 != 0 && a > 0)
			cout << "ODD POSITIVE" << endl;
			
		else if ( a%2 != 0 && a < 0)
			cout << "ODD NEGATIVE" << endl;
			
	testes-=1;
 }

	
	
return 0;
			
}
