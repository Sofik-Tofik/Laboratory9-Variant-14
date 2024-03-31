#include <iostream>
#include <stdlib.h>
using namespace std;

const int n = 5;

int main() {
    int a[n][n];
    int min_diagonal;
    int row_sums[n];

    cout << "Two-dimensional array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 50;
            cout << a[i][j] << '\t';
        }
        cout << '\n';
    }
    cout << '\n';

    min_diagonal = a[0][n - 1];
    for (int i = 1; i < n; i++) {
        if (a[i][n - 1 - i] < min_diagonal) {
            min_diagonal = a[i][n - 1 - i];
        }
    }
    cout << "Minimum element of the secondary diagonal: " << min_diagonal << '\n';

    for (int i = 0; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += a[i][j];
        }
        row_sums[i] = row_sum;
    }

    cout << "One-dimensional array with sums of elements of each row:\n";
    for (int i = 0; i < n; i++) {
        cout << row_sums[i] << '\t';
    }
    cout << '\n';

    return 0;
}