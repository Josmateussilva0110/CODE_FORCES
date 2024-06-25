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

void solve(int arr[], int size)
{
    ll prefix_sum[size];
    prefix_sum[0] = arr[0];
    for(int i = 1; i < size; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    int ans = 0;
    int max_value = 0;
    FOR(i, 0, size)
    {
        max_value = max(max_value, arr[i]);
        if(max_value * 2 == prefix_sum[i])
            ans++;
    }
    cout << ans << '\n';
}

int main() 
{
    optimize;
    int n; cin >> n;
    int ans = 0;
    while(n--)
    {
        int size; cin >> size;
        int arr[size];
        FOR(i, 0, size)
            cin >> arr[i];
        solve(arr, size);
    }
}