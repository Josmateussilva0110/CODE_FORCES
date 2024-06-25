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
        int tam; cin >> tam;
        vii array;
        int max_element = 0, index;
        for(int i = 0; i < tam; i++)
        {
            int first, second;
            cin >> first >> second;
            array.push_back(make_pair(first, second));
            if(first <= 10) max_element = max(max_element, second);
        }
        for(int i = 0; i < tam; i++){ if(array[i].second == max_element) index = i+1;}
        cout << index << '\n';
    }
}
