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
    int size; cin >> size;
    while(size--)
    {
        int tam; cin >> tam;
        vi array(tam);
        vi ans, copy;
        for(int i = 0; i < tam; i++)
        {
            cin >> array[i];
            copy.PB(array[i]);
        }
        sort(array.begin(), array.end());
        int end = array.back();
        int end_two = array[array.size()-2];
        for(const auto &x: copy)
        {
            if(x != end) ans.PB(x - end);
            else ans.PB(x - end_two);
        }
        for(const auto &x: ans)
            cout << x << " ";
        cout << '\n';
    }
}
