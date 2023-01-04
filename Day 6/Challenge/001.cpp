#include <iostream>
using namespace std;

int main() {
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    
    int matrix1[n][m], matrix2[p][q];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            int sum = 0;
            for (int k = 0; k < m; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            cout << sum << ' ';
        }
        cout << endl;
    }
}