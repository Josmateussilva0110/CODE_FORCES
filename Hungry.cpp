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

bool prime(int x)
{
    if(x < 2) return false;
    if(x == 2) return true;
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main()
{
    optimize;
    int size; 
    cin >> size;
    int j = 0;
    while(j < size)
    {
        for(int i = 6; i <= 10000000; i++)
        {
            if(prime(i))
            {
                cout << i << " ";
                j++;
            }
            if(j == size)
                break;
        }
    }
    cout << '\n';
}
