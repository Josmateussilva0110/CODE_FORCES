#include <iostream>
#include <vector>

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long

using namespace std;

int main()
{
    optimize;
    int n;
    cin >> n;

    vector<int> digitSums(10, 0);
    for (int i = 1; i < 10; i++) {
        digitSums[i] = digitSums[i / 10] + i % 10;
    }

    while (n--)
    {
        int tam;
        cin >> tam;
        ll ans = 0;

        for (int i = 1; i <= tam; i++)
        {
            int num = i;
            while (num > 0)
            {
                ans += digitSums[num % 10];
                num /= 10;
            }
        }

        cout << ans << '\n';
    }
}
