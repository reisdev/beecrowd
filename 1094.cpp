#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int numt,i=0;
	int quant;
	char tipo;
	int coelho=0,rato=0,sapo=0,total=0;
	double perc,perr,pers;
	
	cin >> numt;
	
		while ( i < numt) {
			
			cin >> quant >> tipo;
			
			total+=quant;
			
			if ( tipo == 'C') {
				
				coelho += quant;
				
			}
			else if ( tipo == 'R') {
				
				rato += quant;
				
			}
			else if ( tipo == 'S') {
				
				sapo += quant;
				
			
		}
		
	i++;
	}
	
		perc= (((double)coelho*100.00)/total);
		perr= (((double)rato*100.00)/total);
		pers= (((double)sapo*100.00)/total);
		
		cout << "Total: " << total << " cobaias" << endl;
		cout << "Total de coelhos: " << coelho << endl;
		cout << "Total de ratos: " << rato << endl;
		cout << "Total de sapos: " << sapo << endl;
		
		cout << fixed << setprecision(2) << "Percentual de coelhos: " << perc << " %" << endl;
		cout << fixed << setprecision(2) << "Percentual de ratos: " << perr << " %" << endl;
		cout << fixed << setprecision(2) << "Percentual de sapos: " << pers << " %" << endl;
		
return 0;
}
