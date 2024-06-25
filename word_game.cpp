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


int main()
{
    optimize;
    int size;
    cin >> size;
    while(size--)
    {
        map<string, int> freq;
        int tam; cin >> tam;
        string word[3][tam];
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < tam; j++)
            {
                cin >> word[i][j]; freq[word[i][j]]++;
            }
        }
        for(int i = 0; i < 3; i++)
        {
            int ans = 0;
            for(int j = 0; j < tam; j++)
            {
                if(freq[word[i][j]] == 1) ans +=3;
                if(freq[word[i][j]] == 2) ans +=1;
            }
            cout << ans << " ";
        }
        cout << '\n';
    }
}