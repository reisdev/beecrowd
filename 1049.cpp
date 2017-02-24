#include <iostream>

using namespace std;

int main() {

	string tipo;
	
	cin >> tipo;
	
	if(tipo == "vertebrado") {
		
		cin >> tipo;
		
		if (tipo == "ave") {
			
			cin >> tipo;
			
			if ( tipo == "carnivoro" ) 
				cout << "aguia" << endl;
			if ( tipo == "onivoro" )
				cout << "pomba" << endl;
				
		}
		
		if (tipo == "mamifero") {
			
			cin >> tipo;
			
			if ( tipo == "onivoro" ) 
				cout << "homem" << endl;
			if ( tipo == "herbivoro" )
				cout << "vaca" << endl;
				
		
		}
	}
		else if(tipo == "invertebrado") {
			
			cin >> tipo;
			
		if (tipo == "inseto") {
			
			cin >> tipo;
			
			if ( tipo == "hematofago" ) 
				cout << "pulga" << endl;
			if ( tipo == "herbivoro" )
				cout << "lagarta" << endl;
		}
		
		if (tipo == "anelideo") {
			
			cin >> tipo;
			
			if ( tipo == "hematofago" ) 
				cout << "sanguessuga" << endl;
			if ( tipo == "onivoro" )
				cout << "minhoca" << endl;
				
		}
		
	}


	return 0;

}
