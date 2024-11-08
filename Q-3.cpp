#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the matrix: ";
    cin >> size;

    int matrix[size][size];

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Element at (" << i << "," << j << "): ";
            cin >> matrix[i][j];
        }
    }

    int Sum = 0;

    for (int i = 0; i < size; i++) {
        Sum += matrix[i][i];
    }

    cout << "Sum of Diagonal Elements: " << Sum << endl;

    return 0;
}
