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
        int value; cin >> value;
        if(value <= 1399) cout << "Division 4" << '\n';
        else if(value > 1399 && value <= 1599) cout << "Division 3" << '\n';
        else if (value > 1599 && value <= 1899) cout << "Division 2" << '\n';
        else cout << "Division 1" << '\n';
    }   
}