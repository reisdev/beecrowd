#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main () {

	 string nome;
	 int forca,quant;
	 
	 cin >> quant;
	 
	 for ( int i=0 ; i < quant ; i++) {
		 
		 cin >> nome >> forca;
		 
		 if ( nome == "Thor" )
			cout << "Y" << endl;
		 else
			cout << "N" << endl;	 
		 
	}
	 
return 0;
}
