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
    while(size--)
    {
        int n; cin >> n;
        vi ans;
        int divisor = 1;
        while (n > 0) {
            if (n % 10 > 0) ans.PB((n % 10) * divisor);
            n /= 10;
            divisor *= 10;
        }
        cout << ans.size() << '\n';
        for(auto &x: ans) cout << x << " ";
        cout << '\n';
    }
}