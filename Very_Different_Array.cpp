#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long maxDifference = 0;

        int j = m - 1;
        for (int i = n - 1; i >= 0; --i) {
            if (j >= 0 && b[j] > a[i]) {
                maxDifference += b[j] - a[i];
                j--;
            }
        }

        cout << "saida: " << maxDifference << endl;
    }

    return 0;
}
