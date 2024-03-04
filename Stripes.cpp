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
#define All (x.begin(), x.end())
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
        char array[8][8];
        vi count_R;
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                cin >> array[i][j];
                if(array[i][j] == 'R')
                    count_R.PB(i);
            }
        }
        bool valid_2 = true;
        for(int i: count_R)
        {
            bool valid = true;
            for(int j = 0; j < 8; j++)
                if(array[i][j] != 'R')
                {
                    valid = false;
                    break;
                }
            if(valid) 
            {
                cout << "R" << '\n';
                valid_2 = false;
                break;
            }
        }
        if (valid_2) cout << "B" << '\n';
    }
}   
