#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 1000000010
#define INFLL 1000000000000000010LL
#define ALL(x) x.begin(), x.end()
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define os_type int
#define PB push_back
#define EB emplace_back
#define EPS 1e-9
#define endl '\n'

using namespace std;


int main()
{
    optimize;
    int size;
    cin >> size;
    vector<char> collor(size);
    for(int i = 0; i < size; i++)
        cin >> collor[i];
    int ans = 0;
    for(int i = 0; i < size - 1; i++)
    {
        if(collor[i] == collor[i+1])
            ans++;
    }
    cout << ans << endl;
}
