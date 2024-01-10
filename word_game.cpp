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
    optimize;
    int size;
    cin >> size;
    while(size--)
    {
        map<string, int> freq;
        int quant;
        cin >> quant;
        vector<string> palavras(quant);
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < quant; j++)
            {
                cin >> palavras[j];
                freq[palavras[j]]++;
            }
        }
        string maior_palavra;
        int max_occur = 0;

        for (const auto& x : freq) 
        {
            if (x.second > max_occur) 
            {
                max_occur = x.second;
                maior_palavra = x.first;
            }
        }
        vector<int> ans(3, 0);
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < quant; j++)
            {
                if(palavras[j] == maior_palavra)
                    ans[i]+= 1;
                else if (palavras[j] != maior_palavra)
                    ans[i] += 3;
            }
        }
        for(auto x: ans)
            cout << x << " ";
        cout << endl;
    }
}