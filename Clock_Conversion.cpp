#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 1000000010
#define INFLL 1000000000000000010LL
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define PB push_back
#define EB emplace_back
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define MAXN 1010101
#define EPS 1e-9
#define endl '\n'
 
using namespace std;

int main() 
{
    optimize;
    int size; cin >> size;
    int convertido = 0;
    string end;
    while(size--)
    {
        string horas; cin >> horas;
        convertido = horas[0] - '0';
        convertido = convertido * 10 + (horas[1] - '0');
        end = horas[3];
        end+= horas[4];
        if(horas[0] == '0' && horas[1] == '0')
            cout << "12" << ":" << end << " AM" << '\n';
        else if(convertido < 12)
            cout << horas << " AM" << '\n';
        else if(convertido == 12)
            cout << horas << " PM" << '\n';
        else
        {
            if((convertido - 12) < 10)
                cout << "0" << convertido -12 << ":" << end << " PM" << '\n';
            else
                cout << convertido -12 << ":" << end << " PM" << '\n';
        }
    }   
}