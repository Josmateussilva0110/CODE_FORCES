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
    int size; 
    cin >> size;
    while(size--)
    {
        int n; cin >> n;
        vi array;
        for(int i = 0; i < n; i++){ int v; cin >> v; array.PB(v);}
        sort(ALL(array));
        int min = array[0], ans = 0;
        for(int i = 1; i < n; i++) ans+= (array[i] - min);
        cout << ans << '\n';
    }   
}
