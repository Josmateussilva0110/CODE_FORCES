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
    int size;
    cin >> size;
    int cont = 0;
    for(int i = 1; i <= INF; i++)
    {
        int a = i;
        int b = i+1;
        if(b % a != 0)
        {
            int v = (a + ((b + 7) / 3)-2);
            int ans = v * (3 * 3);
            cout << ((ans+size +3) - i) << " ";
            cont++;
        }
        if(cont == size)
            break;
        a++;
        b++;
    }
}
