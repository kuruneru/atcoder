#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N, K; cin >> N >> K;
    ll product = 1,pow = 1, A;

    for (int i = 0; i < K; i++) {
        pow *= 10;
    }

    pow--;

    for (int i = 0; i < N; i++) {
        cin >> A;
        // product * A > pow の場合と同じことはproduct > pow * A{式変形によってこれが可能(両辺をAで割る)}
        if (product > pow / A) {
            product = 1;
        } else {
            product *= A;
        }
    }
    cout << product << endl;

    return 0;
}