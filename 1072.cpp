#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int a,b;
	int i=0;
	long double y,z;
			
	while(cin >> a) {
			
		cin >> b;
		i=0;
		z=1;
		y=1;			
	while(i < (a+1) ){
			
		if ( a == 0)
				y=1;
		else {
			y=y*a;
			a-=1;
		}
		i++;
	}
		
	i=0;
		
	while(i < (b+1)) {
		if ( b == 0)
			z=1;
				
		else {
			z=z*b;
			b-=1;
		}
		i++;
		
	}
	cout << y+z << endl;
		
	
}
		
	
		
return 0;	
}
	
