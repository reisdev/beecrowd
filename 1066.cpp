#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int a,i=0;
	int pares=0,impares=0,posit=0,negat=0;
	

	
	while ( i < 5 ) {
		
		cin >> a;
		
		if ( a%2 == 0 ) {
			pares += 1;
		}
		if ( a%2 != 0 ){
			impares +=1;
			}
		if ( a > 0) {
			posit +=1;
		}
		if ( a < 0) {
			negat +=1;
		}
	i++;
	}
		cout << pares << " valor(es) par(es)" << endl;
		cout << impares << " valor(es) impar(es)" << endl;
		cout << posit << " valor(es) positivo(s)" << endl;
		cout << negat << " valor(es) negativo(s)" << endl;	
	
	
return 0;
			
}
