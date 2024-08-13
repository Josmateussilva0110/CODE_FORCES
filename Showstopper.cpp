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
        int t; cin >> t; 
        vi a(t), b(t);
        
        FOR(i, 0, t) cin >> a[i];
        FOR(i, 0, t) cin >> b[i];
        FOR(i, 0, t) 
        {
            if(a[i] > b[i]) swap(a[i], b[i]);
        }
        int max_a = *max_element(ALL(a));
        int max_b = *max_element(ALL(b));
        if(a.back() == max_a && b.back() == max_b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}