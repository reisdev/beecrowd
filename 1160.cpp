#include <iostream>

using namespace std;


int main () {

	int pop1,pop2;
	double taxa1,taxa2;
	int n,anos=0;
	
	cin >> n;
	
	for (int i=0; i<n ; i++) {
		
		cin >> pop1 >> pop2 >> taxa1 >> taxa2;
		
		while ( pop1 <= pop2 ) {
			
			pop1 *= (taxa1/100.00) + 1.0;
			
			pop2 *= (taxa2/100.00) + 1.0;
			
			anos++;
			
			if (anos > 100) {
                cout << "Mais de 1 seculo." << endl;
                break;
             }
		}
		
		if( anos <=100)
		cout << anos << " anos."<< endl;
		
		anos=0;
	}
return 0;
}
