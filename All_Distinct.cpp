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
        
        int tam; cin >> tam; 
        set <int> array;
        for(int i = 0; i < tam; i++)
        {
            int v; cin >> v;
            array.insert(v);
        }
        int size = array.size();
        if(~(tam - size) & 1)
            cout << array.size() << '\n';
        else    
            cout << array.size()-1 << '\n';
    }
}
