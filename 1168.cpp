#include <iostream>

using namespace std;

int main()
{
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, q, resultado;
    string num;

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        resultado = 0;
        cin >> num;

        for (int p = 0; p < num.length(); p++)
        {
            resultado += leds[int(num[p]) - 48];
        }
        cout << resultado << " leds" << endl;
    }
    return 0;
}