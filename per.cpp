#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 1000000010
#define INFLL 1000000000000000010LL
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define POS(n, x) (lower_bound(ALL(n), x) - (n).begin())
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
#define ordered_set tree<os_type, null_type,less<os_type>, rb_tree_tag,tree_order_statistics_node_update>


int main()
{
    optimize;
    int n;
    bool valid = true;
    cin >> n;
    vi array(n), inverted_array(n);
    for(int i = 0; i < n; i++)
    {
        array[i] = i+1;
    }
    for(int i = n -1, j = 0; i >= 0; i--, j++)
    {
        inverted_array[j] = array[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(array[i] == inverted_array[i])
            valid = false;
    }
    if(valid)
    {
        for(auto x: inverted_array)
            cout << x << " ";
    }
    else
        cout << "-1" << endl;
}