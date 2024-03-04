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
        bool valid = true;
        int tam; cin >> tam;
        vi array(tam);
        for(int i = 0; i < tam; i++)
            cin >> array[i];
        sort(array.begin(), array.end());
        for(int i = 0; i < tam-1; i++)
        {
            if(array[i+1] == array[i])
            {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES": "NO") << '\n';
    }
}
