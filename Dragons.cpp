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
    int forca, size;
    cin >> forca >> size;
    int cont = 0;
    bool ans = true; 
    vector<pair<int, int>> dragons;

    for(int i = 0; i < size; i++)
    {
        int f_dragon, b_dragon;
        cin >> f_dragon >> b_dragon;
        dragons.PB({f_dragon, b_dragon});
    }

    sort(dragons.begin(), dragons.end());

    for(auto &dragon : dragons)
    {
        if(forca > dragon.first)
        {
            forca += dragon.second;
            cont++;
        }
        else
        {
            ans = false; 
            break;
        }
    }

    if(ans && cont == size)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
