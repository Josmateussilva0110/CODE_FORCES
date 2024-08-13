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
    int n; cin >> n;
    while(n--)
    {
        int cont_a = 0, cont_b = 0;
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '>') cont_a++;
            else if(s[i] == '<') cont_b++;
        }
        int ans = min(cont_a, cont_b);
        cout << ans << '\n';
    }
}