#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int a=1,b;
	int vg=0,vi=0,em=0,jg=0;
	
	while ( a == 1 ) {
		
		cin >> a >> b;
		
		if ( a > b)
			vi++;
		else if ( b > a)
			vg++;
		else if ( a == b)
			em++;
		
		jg++;	
		
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		
		cin >> a;

	}
		
	cout << jg << " grenais" << endl;
	cout << "Inter:" << vi << endl;
	cout << "Gremio:" << vg << endl;
	cout << "Empates:" << em << endl;
	
	if ( vi > vg )
		cout << "Inter venceu mais" << endl;
		
	else if ( vg > vi )
		cout << "Gremio venceu mais" << endl;
	else if ( vg == vi )
		cout << "Nao houve vencedor" << endl;
	
return 0;
}
