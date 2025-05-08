#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    vector<int> ary(K, 1);

    for (int i = K - 1; i <= N; i++) {
        ary.push_back(ary[i] + ary[i - 1]);
    }
    cout << ary[N] % 1000000000 << endl;
    return 0;
}