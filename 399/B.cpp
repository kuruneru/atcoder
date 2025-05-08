#include <iostream>
using namespace std;

int main() {
    int N, rank;
    cin >> N;
    int P[N];

    for (int i=0; i<N; i++) cin >> P[i];
    for (int i=0; i<N; i++) {
        rank = 1;
        for (int k=0; k<N; k++) {
            if (P[i] < P[k]) {
                rank++;
            }
        }
        cout << rank << endl;
    }

    return 0;
}