#include <string>
#include <iostream>
using namespace std;

int main() {
    int N;
    
    cin >> N;
    char S[N];
    char T[N];
    
    for (int i=0; i<N; i++) cin >> S[i];
    for (int i=0; i<N; i++) cin >> T[i];
    int count = 0;

    for (int i=0; i < N; i++) {
        if (S[i] != T[i]) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}