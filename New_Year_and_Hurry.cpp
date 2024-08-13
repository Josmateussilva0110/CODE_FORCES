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
#define EPS 1e-9
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define MAXN 1010101
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) 
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a)) 
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a)) 
#define endl '\n'
 
using namespace std;


int solve(int qnt_p, int t)
{
    int accumulate = 0, solves = 0; 
    int limit = 240 - t;
    FORN(i, 1, qnt_p)
    {
        accumulate += 5 * i;
        if(accumulate > limit)
            break;
        solves+=1;
    }
    return solves;
}

int main() 
{
    optimize;
    int qnt_problems, time_limit;
    cin >> qnt_problems >> time_limit;
    cout << solve(qnt_problems, time_limit) << '\n';
}