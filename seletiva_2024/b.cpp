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
#define EPS 1e-9
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define MAXN 1010101
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) 
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a)) 
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a)) 
#define endl '\n'
 
using namespace std;


int main() 
{
    optimize;
    map<int, int> freq;
    int a = 0, b = 0, c = 0;
    while(true)
    {
        bool valid = true;
        while(true)
        {
            int n; cin >> n;
            if(n > 4)
                cin >> n;
            if(n == 4)
            {
                valid = false;
                break;
            }
            if(n == 1) a++;
            if(n == 2) b++;
            if(n == 3) c++;
        }
        if(!valid)
            break;
    }
    cout << "MUITO OBRIGADO" << '\n';
    cout << "Alcool: " << a << '\n';
    cout << "Gasolina: " << b << '\n';
    cout << "Diesel: " << c << '\n';
}