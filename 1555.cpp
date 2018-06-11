#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

   int main() {
   	
	int x,y,i;
	double carlos,rafael,beto;
	

	cin >> i;
	
	while (i > 0) {
		
		cin >> x >> y;
		
		rafael= pow((3*x),2)+ pow(y,2);
		beto= 2*pow(x,2)+ pow((5*y),2);
		carlos= (-100*x)+pow(y,3);
		
		if ( rafael > beto && rafael > carlos)
			cout << "Rafael ganhou" << endl;
		else if ( beto > rafael && beto > carlos)
			cout << "Beto ganhou" << endl;
		else if ( carlos > beto && carlos > rafael)
			cout << "Carlos ganhou" << endl;
			
		i -= 1;
		
	}

	
 return 0;
 
}
