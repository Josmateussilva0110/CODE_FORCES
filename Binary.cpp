#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 1000000010
#define INFLL 1000000000000000010LL
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define os_type int
#define PB push_back
#define EB emplace_back
#define MOD 1000000007
#define PRIME 101 
#define MAXN 1010101
#define MAXL 23
#define EPS 1e-9
#define endl '\n'

using namespace std;

int main()
{
    optimize;
    int size;
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        int tam;
        cin >> tam;
        
        vector<char> valores; 
        
        for(int j = 0; j < tam; j++)
        {
            char c;
            cin >> c;
            valores.push_back(c);
        }

        int cont_zero = count(valores.begin(), valores.end(), '0');
        int cont_um = count(valores.begin(), valores.end(), '1');

        if (cont_zero > cont_um)
            cout << "YES" << '\n';
        else
        {
            bool valid = true;
            for(int j = 0; j < tam - 1; j++)
            {
                if(valores[j] != valores[j+1])
                {
                    valid = false;
                    break;
                } 
            }
            if(valid)
                cout << "NO" << '\n';
            else
                cout << "YES" << '\n';
        }
    }
}
