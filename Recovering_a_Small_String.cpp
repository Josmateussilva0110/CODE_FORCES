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

char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 

int main()
{
    optimize;

    int size;
    cin >> size;

    map<char, int> alphabetMap;

    for (char ch = 'a'; ch <= 'z'; ++ch)
        alphabetMap[ch] = ch - 'a' + 1;

    while (size--) 
    {
        int value;
        cin >> value;

        string result = "";
        for (int i = 0; i < 3; ++i) 
        {
            for (char ch : alfabeto) 
            {
                cout << "ch: " << ch << " " << alphabetMap[ch] << '\n';
                if (value >= alphabetMap[ch]) 
                {
                    result += ch;
                    value -= alphabetMap[ch];
                    break;
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}   

