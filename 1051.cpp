#include <iostream>
#include <iomanip>

using namespace std;

   int main() {
   	
	double a;
	double dt=8.00/100.00,tq=18.00/100.00,qc=28.00/100.00;
	
	cin >> a;
	
	if (a <= 2000.00)
		cout << "Isento" << endl;
	else if (a <= 3000.00)
		cout << fixed << setprecision(2) << "R$ " << ((a-2000)*dt) << endl;
	else if (a <= 4500.00)
		cout << fixed << setprecision(2) << "R$ " << (1000*dt)+((a-3000.00)*tq) << endl;
	else
		cout << fixed << setprecision(2) << "R$ " << (1000*dt)+(1500.00*tq)+((a-4500.00)*qc) << endl;
		
 return 0;
 
}
