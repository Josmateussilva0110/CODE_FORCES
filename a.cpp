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
    char letras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int valores[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for(int i = 0; i < size; i++)
    {
        string entrada;
        cin >> entrada;
        char letra = entrada[0];
        int numero = entrada[1] - '0'; 
        for(int j = 0; j < 8; j++)
        {
            if(letras[j] != letra)
                cout << letras[j] << numero << '\n';
        }
        for(int j = 0; j < 8; j++)
        {
            if(numero != valores[j])
                cout << letra << valores[j] << '\n';
        }
    }
}
