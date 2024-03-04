#include <bits/stdc++.h>
#include <fstream>
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

bool formaQuadrado(const vector<vector<int>>& matriz) {
    size_t min_linha = matriz.size();
    size_t min_coluna = matriz[0].size();
    size_t max_linha = -1;
    size_t max_coluna = -1;
    for (size_t i = 0; i < matriz.size(); ++i) {
        for (size_t j = 0; j < matriz[i].size(); ++j) {
            if (matriz[i][j] == 1) {
                min_linha = min(min_linha, i);
                min_coluna = min(min_coluna, j);
                max_linha = max(max_linha, i);
                max_coluna = max(max_coluna, j);
            }
        }
    }
    size_t tamanho_linha = max_linha - min_linha + 1;
    size_t tamanho_coluna = max_coluna - min_coluna + 1;

    return tamanho_linha == tamanho_coluna;
}

int main() {
    ifstream input("entrada.txt");
    ofstream output("saida.txt");

    int t;
    input >> t;

    while (t--) {
        int n;
        input >> n;
        vector<vector<int>> matriz(n, vector<int>(n));

        for (size_t i = 0; i < static_cast<size_t>(n); i++) {
            for (size_t j = 0; j < static_cast<size_t>(n); j++) {
                input >> matriz[i][j];
            }
        }

        bool isSquare = formaQuadrado(matriz);

        if (isSquare)
            output << "SQUARE\n";
        else
            output << "TRIANGLE\n";
    }

    input.close();
    output.close();

    return 0;
}