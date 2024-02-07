#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 1000000010
#define INFLL 1000000000000000010LL
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define os_type int
#define PB push_back
#define EB emplace_back
#define MOD 1000000007
#define PRIME 101 
#define MAXN 1010101
#define MAXL 23
#define EPS 1e-9
#define endl '\n'


using namespace std;

int main() 
{
    optimize;
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int start = -1, end = -1;
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == 'B') 
            {
                if (start == -1) {
                    start = i + 1;
                }
                end = i + 1;
            }
        }
        int ans = (end - start) + 1;
        cout << ans << endl;
    }
}
