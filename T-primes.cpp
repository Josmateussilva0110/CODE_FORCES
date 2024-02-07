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

vector<int> sieve(int limit) 
{
    std::vector<bool> is_prime(limit + 1, true);
    std::vector<int> primes;

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

bool is_t_prime(int x, const std::vector<int>& primes) {
    if (x < 2) return false;

    int divisors = 0;

    for (int prime : primes) {
        if (x % prime == 0) {
            divisors++;

            // Verifica se prime é um divisor diferente de x
            if (prime != x / prime) {
                divisors++;
            }

            // Se já encontrou mais de 3 divisores, pode retornar falso
            if (divisors > 3) {
                return false;
            }

            // Se prime e x/prime são iguais, não é necessário verificar novamente
            if (prime == x / prime) {
                break;
            }
        }
    }

    // Verifica se exatamente 3 divisores foram encontrados
    return divisors == 3;
}

int main() {
    int limit = 1000000;  // Pode ajustar o limite conforme necessário
    std::vector<int> primes = sieve(limit);

    int size;
    std::cin >> size;

    while (size--) {
        int number;
        std::cin >> number;

        if (is_t_prime(number, primes)) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }

    return 0;
}
