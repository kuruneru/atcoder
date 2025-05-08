#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int);

int main() {
    int n, m; cin >> n >> m;
    cout << fib(n - m) << endl;
    return 0;
}

int fib(int n) {

    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}