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
    vi array(3);
    for(int i = 0; i < 3; i++)
        cin >> array[i];
        
    sort(ALL(array));
    
    int ans;
    
    if (array[0] + array[1] <= array[2]) // Caso Patrick possa ir diretamente de uma loja para outra
        ans = array[0] + array[1] + array[0] + array[1]; // Ele vai de uma loja para outra e retorna para casa
    else
        ans = array[0] + array[1] + array[2] * 2; // Caso contrário, ele vai para cada loja separadamente e retorna para casa
    
    cout << ans << '\n';
    
    return 0;
}