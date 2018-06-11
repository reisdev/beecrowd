#include <iostream>
#include <iomanip>

using namespace std;


int main () {

	double x;
	int a;
	double soma=0,vv=0,media;
	
	while(vv < 2) {
		
		cin >> x;
		
		if ( x < 0 || x >10) {
			cout << "nota invalida" << endl;
		}
		else if ( (x >= 0) || (x <=10)) {
			vv += 1;
			soma += x;
		}
		
	}

	media = (float)(soma/vv);
	
	cout << fixed << setprecision(2) << "media = " << media << endl;
	
	
		
	while (true) {
		
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> a;
		
	if ( a == 2 ) {
		break;		
	}
	else if ( a == 1)
		main();
}
return 0;
}
