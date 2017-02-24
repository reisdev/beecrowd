#include <iostream>

using namespace std;

int main () {

	int a,b,fat=1;
	
	cin >> a;
	
	b=a;
	
	for( int i=0; i < b; i ++) {
		
		fat= fat*a;
		a--;		
	}
	cout << fat << endl;
	
return 0;
}
