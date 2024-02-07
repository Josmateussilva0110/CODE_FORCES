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
    int size;
    cin >> size; 
    while(size--)
    {
        int max_x = 0, max_y = 0;
        int min_x = 1001, min_y = 1001;
        int x, y;
        for(int i = 0; i < 4; i++)
        {
            cin >> x >> y;
            max_x = max(x, max_x);
            max_y = max(y, max_y);
            min_x = min(x, min_x);
            min_y = min(y, min_y);
        }
        int lado = max_x - min_x;
        int lado2 = max_y - min_y;
        int ans = lado * lado2;
        cout << ans << '\n';
    }
}