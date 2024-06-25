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
    int t; cin >> t;
    while(t--) {
        int n, k, ans = 1;cin >> n >> k;
        vi x(n); for (int &i : x) cin >> i;
        int last = x[0];
        for (int i = 1;i < n and ans;++i) { 
            ans = last > x[i] ? 0 : 1;
            last = x[i];
        }
        cout << (ans or k > 1 ? "YES" : "NO") << '\n';
    }
    return 0;
}
