#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main () {

	double x1,y1,x2,y2;
	double absy,absx;
	double my=0,mx=0;
	double dify,difx;
	
	cin >> x1 >> y1 >> x2 >> y2;
	
	absy= abs(y2-y1);
	absx = abs(x2-x1);
	
	if ( absy == absx ) 
		cout << (absy*1.5) << endl;
	
	else if ( absy < absx ) {
		
		difx=absx;
		
		while ( absy < absx ) {
			absy++;
			my++;
		}
		cout << fixed << setprecision(1) << my*1.0 + difx*1.5 << endl;
	}
	
	else if ( absx < absy ) {						// No caso de teste, absx= 1 e absy=2
		
		dify=absy;
		
		while ( absx < absy ) {
			absx++;
			mx++;
		}
		cout << fixed << setprecision(1) << mx*1.0+ dify*1.5 << endl;
	}
	
	
return 0;
}
