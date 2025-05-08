#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, count = 0; cin >> N;
    string hrug;
    bool judge = false;
    for (int i = 0; i < N; i++) {
        cin >> hrug;
        if (hrug == "login") {
            judge = true;
        } else if (hrug == "logout") {
            judge = false;
        }

        if (judge == false && hrug == "private") {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}