#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    for (int i = 0; i < str.size(); i++) {
        str[i] -= 't' - 'g';
        cout << str[i];
    }
    cout << endl;
}
