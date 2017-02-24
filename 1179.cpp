#include <iostream>
#include <iomanip>

using namespace std;

#define size 15

void verificaPar(int *a, int *par,int &cont, int &lastpar){
	
	cout << "ok" << endl;
	int quant = 0;
	
	for ( int i = lastpar; i < size && cont < size; i++){
		if ( a[i]%2 == 0){
		par[quant] = a[i];
		quant++;			
		}
		
		if (quant == 5 || cont+quant >= 15) {
		lastpar = i;	
		cont+=quant;
		break;	
		}		
	}

	for (int n = 0; n < quant; n++)
		cout << "par[" << n << "]= " << par[n] << endl;
	
	return;	
}

void verificaImpar(int *a, int *impar,int &cont,int &lastimpar){
		
	int quant = 0;
	for ( int i = lastimpar; i < size && cont < size; i++){
		if ( a[i]%2 != 0){
		impar[quant] = a[i];
		quant++;			
		}
		
		if ( quant == 4 || cont+quant >= 15) {
		lastimpar = i;
		cont+=quant;		
		break;	
		}
		
	}
	
	for (int n = 0; n < quant; n++)
		cout << "impar[" << n << "]= " << impar[n] << endl;
		
	return;	
}

int main() {
		
	int cont = 0, lastpar = 0,lastimpar = 0;
	int *vet,*par,*impar;
	
	
	vet = new int[size];
	par = new int[5];
	impar = new int[5];
	
	int valor = 0;
	
	for ( int i = 0; i < size; i++){
		cin >> valor;
		vet[i] = valor;		
	}
	
	for ( int i = 0; i < size; i++) {
		if(vet[i]%2 == 0)
			verificaPar(vet,par,cont,lastpar);
		else
			verificaImpar(vet,impar,cont,lastimpar);		
	}
	
	
	
	delete[] vet;
	delete[] par;
	delete[] impar;
	
	return 0;	
}

