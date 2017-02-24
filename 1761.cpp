#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main () {

	double ang,dist,anao,fio;
	double pi=3.141592654;
	
	while ( cin >> ang >> dist >> anao ) {
		
		fio = 5 * ((tan(ang*(double)(pi/180)) * dist) + anao);
		
		cout << fixed << setprecision(2) << fio << endl;
	}
return 0;
}
