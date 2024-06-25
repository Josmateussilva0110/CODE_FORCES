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
        vi array;
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < a; i++)
        {
            int v;
            cin >> v;
            array.PB(v);
        }
        int ans = 0, cont = 0;
        vi array_2;
        for(int i = 0; i < a -1; i+=2)
        {
            int mod_a, mod_b;
            mod_a = array[i] % b;
            mod_b = array[i+1] % b;
            if(mod_a == mod_b)
            {
                array_2.PB(array[i]);
                array_2.PB(array[i+1]);
            }
        }
        sort(ALL(array_2));
        for(auto &X: array_2)
            cout << X << '\n';
    }
}
