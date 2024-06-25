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
    while (size--)
    {
        int cont = 1;
        bool valid = true;
        string s; cin >> s;
        for(int i = 0; i < (int)s.size() -1; i++)
        {
            if(s[i] != s[i+1])
            { 
                if(cont > 1) cont = 1;
                else{valid = false;break;}
            }
            else cont++;
        }
        cout << (cont >= 2 && valid ? "YES": "NO") << '\n';
    }
}
