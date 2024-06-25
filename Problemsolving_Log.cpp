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
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        for(char c = 'A'; c <= 'Z'; c++)
        {
            int char_count = 0;
            for (char &ch : s){ if (ch == c) char_count++;}
            if (char_count >= c - 'A' + 1)
                ans++;
        }
        cout << ans << '\n';
    }
}