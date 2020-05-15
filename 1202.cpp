#include <iostream>
#include <cmath>

using namespace std;

int fib(int pos)
{
    if (pos == 1 || pos == 2)
        return 1;

    int f1 = 2, f2 = 3, resultado;

    for (int i = 4; i < pos; i++)
    {
        resultado = f1 + f2;
        f1 = f2;
        f2 = resultado;
    }
    return resultado;
}

int main()
{
    int quant, resultado;

    cin >> quant;

    string valor;

    for (int i = 0; i < quant - 1; i++)
    {
        resultado = 0;

        cin >> valor;

        for (int p = 0; p < valor.length(); p++)
        {
            if (valor[p] == '1')
            {
                resultado += pow(2, valor.length() - p - 1);
            }
        }
        printf("%03d\n", fib(resultado));
    }
    return 0;
}