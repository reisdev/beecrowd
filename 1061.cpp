#include <iostream>
#include <string>

using namespace std;

int main () {

	int d1,d2,h1,h2,min1,min2,seg1,seg2;
	string dia,pontos;
	int df,hf,minf,segf;
	
	cin >> dia >> d1;
	cin >> h1 >> pontos >> min1 >> pontos >> seg1;
	cin >> dia >> d2;
	cin >> h2 >> pontos >> min2 >> pontos >> seg2;
	
	if (h2 < h1) {
		df= d2-d1-1;
		hf= 24-(h1-h2);
	}
	
	else {
		df= d2-d1;
		hf= h2-h1;
	}

	if (min2 < min1) {
		minf=60-(min1-min2);
		hf-=1;
	}
	
	else
		minf=min2-min1;		
	
	if (seg2 < seg1) {
		segf=60-(seg1-seg2);
		minf-=1;
	}
	else
		segf=seg2-seg1;
	
	cout << df << " dia(s)" << endl;
	cout << hf << " hora(s)" << endl;
	cout << minf << " minuto(s)" << endl;
	cout << segf << " segundo(s)" << endl;
		
	
return 0;
}
