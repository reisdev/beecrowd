#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

   int main() {
   	
	double a,b,c;
	double dba,dbb,dbc;
	
	cin >> a >> b >> c;
	
	dba=pow(a,2);
	dbb=pow(b,2);
	dbc=pow(c,2);
	
	if ( a >= b && a >= c ){
		
		if ( a >= (b+c) ) 
			cout << "NAO FORMA TRIANGULO" << endl;
		else {	
					
		if ( dba == ( dbb + dbc ) ) 
			cout << "TRIANGULO RETANGULO" << endl;
			
		if ( dba > ( dbb + dbc ) ) 
			cout << "TRIANGULO OBTUSANGULO" << endl;
			
		if ( dba < ( dbb + dbc ) ) 
			cout << "TRIANGULO ACUTANGULO" << endl;
			
		if ( a == b && b == c)
			cout << "TRIANGULO EQUILATERO" << endl;
			
		if ( (c == b && b != a) || (b == a && b!=c) || (c == a && c !=b) ) 
			cout << "TRIANGULO ISOSCELES" << endl;	
		}
	}
	
	else if ( b >= c && b >= a ){
		
		if ( b >= (c+a) ) 
			cout << "NAO FORMA TRIANGULO" << endl;
			
		else {	
					
		if ( dbb == ( dbc + dba ) ) 
			cout << "TRIANGULO RETANGULO" << endl;
			
		if ( dbb > ( dbc + dba ) ) 
			cout << "TRIANGULO OBTUSANGULO" << endl;
			
		if ( dbb < ( dbc + dba ) ) 
			cout << "TRIANGULO ACUTANGULO" << endl;
			
		if ( b == a && b == c)
			cout << "TRIANGULO EQUILATERO" << endl;
			
		if ( (c == b && b != a) || (b == a && b!=c) || (c == a && c !=b) ) 
			cout << "TRIANGULO ISOSCELES" << endl;	
		}
	}	
	else if ( c >= b && c >= a ) {
		
		if ( c >= (b+a) ) 
			cout << "NAO FORMA TRIANGULO" << endl;
			
		else {	
				
		if ( dbc == ( dbb + dba ) ) 
			cout << "TRIANGULO RETANGULO" << endl;
			
		if ( dbc > ( dba + dbb ) ) 
			cout << "TRIANGULO OBTUSANGULO" << endl;
			
		if ( dbc < ( dbb + dba ) ) 
			cout << "TRIANGULO ACUTANGULO" << endl;
		
		if ( c == b && b == a)
			cout << "TRIANGULO EQUILATERO" << endl;
			
		if ( (c == b && b != a) || (b == a && b!=c) || (c == a && c !=b) ) 
			cout << "TRIANGULO ISOSCELES" << endl;	
				
		}
	}
 return 0;
}
