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

using namespace std;

bool solve(int n, vi& recipiente) 
{
    int tot_agua = 0;
    for (int i = 0; i < n; i++)
        tot_agua += recipiente[i];
    if (tot_agua % n != 0)
        return false;
    int total = tot_agua / n;
    for (int i = 0; i < n; i++) 
    {
        if (recipiente[i] > total) 
        {
            recipiente[(i + 1) % n] += (recipiente[i] - total);
            recipiente[i] = total; 
        } 
        else if (recipiente[i] < total)
            return false;
    }
    return true;
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        vi recipiente(n);

        for (int i = 0; i < n; i++)
            cin >> recipiente[i];

        if (solve(n, recipiente))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
