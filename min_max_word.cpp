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
    string s; cin >> s;
    int cont_lower = 0, cont_upper = 0;
    FOR(i, 0 , s.length())
    {
        if(isupper(s[i])) cont_upper++;
        else cont_lower++;
    }
    if(cont_lower > cont_upper || cont_lower == cont_upper)
    {
        FOR(i, 0 , s.length())
            cout << static_cast<char>(std::tolower(s[i]));
    }
    else
    {
        FOR(i, 0 , s.length())
            cout << static_cast<char>(std::toupper(s[i]));
    }
    cout << '\n';
}