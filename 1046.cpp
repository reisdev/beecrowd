#include <iostream>

using namespace std;

int main() {


	int a,b;
	int horas;
	
	cin >> a >> b;
	
	if ( a > 12) {
		
		a= 24-a;

	horas = a+b;
	
	cout << "O JOGO DUROU " << horas << " HORA(S)"<< endl;
	
	}
	
	else if ( a <= 12 && b <= 12) {
		a=24-a;
	horas = a+b;
	
	cout << "O JOGO DUROU " << horas << " HORA(S)"<< endl;
		
	}
		
	else if (b > 12 && a <=12 ) {
		
	horas = b-a;
	
	cout << "O JOGO DUROU " << horas << " HORA(S)"<< endl;
	
}
	else if ( a == 0 && b == 0) {
		
		cout << "O JOGO DUROU 24 HORA(S)" << endl;
		
	}
	
	else if ( a == 0) {
		
		cout << "O JOGO DUROU " << b << " HORA(S)" << endl;
		
	}

	else if ( b == 0) {
		
		cout << "O JOGO DUROU " << 24-a << " HORA(S)" << endl;
		
	}
	return 0;
	
}
