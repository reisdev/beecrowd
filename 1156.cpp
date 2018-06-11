#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	double S=1;
	int a=1;
	  for ( int i=2; a < 39; i+=2 ) {
		  
		  S += a / (double)i;
		  a+=2;
		 }
		 
		 cout << fixed << setprecision(2) << S << endl;
		 
return 0;
}
