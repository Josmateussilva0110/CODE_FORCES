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
#define ordered_set tree<os_type, null_type,less<os_type>, rb_tree_tag,tree_order_statistics_node_update>

int main()
{
    optimize;
    vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'Y'};
    string lethe; 
    cin >> lethe; 
    vector<char> ans;

    for (int i = 0; i < int(lethe.length()); i++)
    {
        char c = lethe[i];
        auto achei_vogal = find(vowels.begin(), vowels.end(), toupper(c));
        if (achei_vogal == vowels.end())
        {
            ans.PB('.');
            ans.PB(tolower(c));
        }
    }

    for (auto const &x : ans)
        cout << x;
    cout << endl;
}
