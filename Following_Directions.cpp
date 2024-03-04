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
    int size; cin >> size;
    while(size--)
    {
        bool valid = false;
        int x_a = 0, y = 0;
        int tam; cin >> tam;
        vector<char> array;
        for(int i = 0; i < tam; i++)
        {
            char letter; cin >> letter;
            array.PB(letter);
        }
        for(auto &x: array)
        {
            if(x == 'L')
                x_a--;
            else if(x == 'R')
                x_a++;
            else if(x == 'U')
                y++;
            else
                y--;
            if(x_a == 1 && y == 1)
            {
                valid = true;
                break;
            }
        }
        cout << (valid ? "YES":"NO") << '\n';
    }
}
