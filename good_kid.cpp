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


using namespace std;

int main()
{
    int size;
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        int tam;
        cin >> tam;
        vi array(tam);
        for(int j = 0; j < tam; j++)
        {
            cin >> array[j];
        }
        int menor = *min_element(array.begin(), array.end());
        long long ans = 1;
        bool has_one = false;

        for (int j = 0; j < tam; j++) 
        {
            if (array[j] == menor && !has_one) 
            {
                ans *= (array[j] + 1);
                has_one = true;
            } 
            else 
            {
                ans *= array[j];
            }
        }

        cout << ans << endl;
    }
}