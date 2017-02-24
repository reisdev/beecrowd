#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int a,b,c,d;
	int minutos,horas;
	
	cin >> a >> b >> c >> d;
	
	horas = c - a;
	
	if ( c < a ) {
		horas = 24 + c - a;
	}
	
	minutos = d - b;
	
	if ( d - b < 0) {
	
		minutos= 60 + d - b;
		horas--;
	}
	
	if( a == c && b == d){
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
	}
	else 
		cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
	
return 0;
}
