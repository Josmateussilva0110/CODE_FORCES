#include <iostream>
#include <vector>

using namespace std;

int minOperationsToArrangeCats(int n, const string& s, const string& f) {
    int operations = 0;
    int catsInBoxes = 0;
    int emptyBoxes = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            catsInBoxes++;

            if (f[i] == '0') {
                operations++;
            }
        } else {
            if (f[i] == '1') {
                emptyBoxes++;
            }
        }
    }

    for (int i = 0; i < n && emptyBoxes > 0; ++i) {
        if (s[i] == '0' && f[i] == '1') {
            operations++;
            emptyBoxes--;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s, f;
        cin >> s >> f;

        int result = minOperationsToArrangeCats(n, s, f);

        cout << "saida: " << result << endl;
    }

    return 0;
}
