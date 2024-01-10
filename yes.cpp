#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qnt;
    string palavra;
    cin >> qnt;
    bool valid = true;
    string comparar = {'Y', 'E', 'S'};
    for(int i = 0; i < qnt; i++)
    {
        cin >> palavra;
        for(int i = 0; i < int(comparar.size()); i++)
        {
            if(toupper(palavra[i]) != comparar[i])
                valid = false;
        }
        if(valid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}