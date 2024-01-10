#include <bits/stdc++.h>


using namespace std;

bool prime(int x)
{
    if(x < 2)
        return false;
    for(int i = 2; i * i <= x; i++)
    {
        if( x % i == 0)
            return false;   
    }
    return true;
}

int main()
{
    int n, m;
    int ans = 0, is_prime;
    cin >> n >> m;
    for(int i = n+1; i <= 47; i++)
    {
        if(prime(i))
        {
            ans = i;
            break;
        }
    }
    if(ans == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}