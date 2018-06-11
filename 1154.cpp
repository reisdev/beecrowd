#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int idade=1;
	int quant=0;
	double soma,media;
	
	while (cin >> idade) {
		
		if (idade < 0) 
			break;
		
		if( idade > 0) {
			quant++;
			soma += idade;
			
		}

	}
	
	media = (soma/quant);
	
	cout << fixed << setprecision(2) << double(media) << endl;
		
return 0;
}
