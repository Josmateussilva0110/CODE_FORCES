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
        vi array(3);
        for(int i = 0; i < 3; i++)
            cin >> array[i];
        sort(array.begin(), array.end(), greater<int>());
        int ans = array[0] + array[1];
        if(ans >= 10)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}