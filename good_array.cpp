#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int tam;
        cin >> tam;
        vector<int> array(tam);
        unordered_map<int, int> dados;
        int soma = 0;
        bool valid = true;

        for (int j = 0; j < tam; j++)
        {
            cin >> array[j];
            soma += array[j];
            dados[array[j]]++;
        }

        if (tam == 1 || soma == tam)
            valid = false;

        for (auto x : dados)
        {
            if (x.second > 1 || soma == tam)
            {
                valid = false;
                break;
            }
        }
        if (valid)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
