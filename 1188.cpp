#include <iostream>
#include <iomanip>

using namespace std;

#define MAX 12

int main() {
		
	char tipo;
	double M[MAX][MAX],valor,soma=0,quant=0;
	
	cin >> tipo;
	
	for (int i=0; i < MAX; i++) {
		for (int j=0; j < MAX; j++) {
			cin >> valor;
			M[i][j]=valor;
			
		}	
	}
	
	for (int i=MAX/2+1,k=1; i < MAX;i++,k++){
	  for (int j = MAX/2-k; j < MAX/2+k;j++){
	      soma+=M[i][j];
	      quant++;
	  }
	}
	
	if ( tipo == 'S')
		cout << fixed << setprecision(1) << soma << endl;
	else if ( tipo == 'M')
		cout << fixed << setprecision(1) << (double)(soma/quant) << endl;
		
	return 0;	
}

