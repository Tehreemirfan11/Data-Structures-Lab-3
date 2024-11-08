#include <iostream>
using namespace std;

int main() {
    const int rows = 2;
    const int col = 2;

    int array_one [rows][col] = { {4, 6}, {6, 1} };
    int array_two [rows][col] = { {10, 2}, {9, 4} };
    int sum[rows][col];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            sum[i][j] = array_one[i][j] + array_two[i][j];
        }
    }

    cout << "Sum of the two arrays:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
