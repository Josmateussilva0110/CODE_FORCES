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
        int size; cin >> size;
        map<int, int> freq;
        int size_diff = 0, size_equal = 0;
        FOR(i, 0, size)
        {
            int v; cin >> v;
            if(freq.find(v) == freq.end())
            {
                freq[v] = 1;
                size_diff++;
            }
            else
            {
                freq[v] +=1;
                size_equal++;
            }
        }
        int ans = min(size_diff, size_equal+1);
        if(size_diff == size_equal+1) ans = size_equal;
        cout << ans << '\n';
        //cout << size_diff << " " << size_equal+1 << '\n';
    }
}