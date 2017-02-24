#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int t;
	int a,quant;
	double valorf,custo;
	double preco[5] = {1.50,2.50,3.50,4.50,5.50};
	
	cin >> t;
	
	for ( int i=0 ; i < t ; i++) {
	
		cin >> a;
		cin >> quant;
	
		custo = (preco[a-1001]*quant);
		
		valorf+= custo;		
	}
	
	cout << fixed << setprecision(2) << valorf << endl;

return 0;
}
