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
    vi boys(n);
    FOR(i, 0, n) cin >> boys[i];
    int m; cin >> m;
    vi girls(m);
    FOR(i, 0, m) cin >> girls[i];
    sort(ALL(boys));
    sort(ALL(girls));
    int ans = 0, i = 0, j = 0;
    while(i < n && j < m)
    {
        int result = abs(boys[i] - girls[j]);
        if(result <= 1) {ans++; i++; j++;}
        else if(boys[i] < girls[j]) i++;
        else j++;
    }
    cout << ans << '\n';
}