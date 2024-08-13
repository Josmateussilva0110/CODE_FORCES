#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main() { optimize;
    int n; cin >> n;
    vector<int> x(n); for(auto &i : x) cin >> i;
    int s, t; cin >> s >> t;
    if (s > t) swap(s, t);
    auto solve = [&](int inicio, int fim) -> int {
        int custo = 0;
        for (int i = inicio;i < fim;++i) custo += x[i - 1];
        return custo;
    };
    int custo_a = solve(s, t);
    int custo_b = solve(t, n + 1);
    custo_b += solve(1, s);
    cout << min(custo_a, custo_b) << '\n';
    return 0;
}