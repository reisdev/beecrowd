#include <iostream>
using namespace std;
int main() {
	
	int a, b;
	
	cin >> a >> b;
	
	int q=a/b;
	int r=a%b;
	
	if(a < 0 && b < 0)
	{
		if(r<0 && q<=0) {
			q++;
			r=-(b*q)+a;
		}
		else if(r<0 && q>0) {
			q++;
			r=-(b*q)+a;
		}
	}
	
	else {
		if(r<0 && q<=0) {
			q--;
			r=-(b*q)+a;
		}
		else if(r<0 && q>0) {
			q++;
			r=-(b*q)+a;
		}
	}
	cout << q << " " << r<< endl;;
	
return 0;
}
