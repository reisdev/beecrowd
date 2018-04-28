#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
#define MAXCAND 10000
#define MAXELEIT 1000000
int main () {
 int cont[MAXCAND+1];
 int voto[MAXELEIT];
 int n, m, i, j;

 cin >> n; //numero de candidatos
 cin >> m; //numero de eleitores

 for(i=0; i<m; ++i) //leitura dos votos
 scanf("%d",&voto[i]); //lê valor como cin >> voto[i], porém mais rápido

 for(i=1; i<=n; i++) { //contagem dos votos, candidato por candidato
 cont[i] = 0;
 for(j=0; j<m; j++)
 if (voto[j]==i) //se o eleitor j votou no candidato i
 cont[i]++; //aumentar contador do candidato i
 }

 cout << "-----RESULTADO:-------\n";
 cout << "Candidato Votos \n";
 cout << "----------------------\n";
 for(i=1; i<=n; i++)
 cout << setw(9) << i << setw(11) << cont[i] << endl;
 cout << "----------------------\n";
 return 0;
}
