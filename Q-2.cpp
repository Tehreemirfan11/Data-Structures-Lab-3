#include <iostream>
using namespace std;

int main() {
    int Size;

    cout << "Enter the size of the matrix: ";
    cin >> Size;

    int matrix[Size][Size];

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cout << "Element at (" << i << "," << j << "): ";
            cin >> matrix[i][j];
        }
    }

    cout << "Diagonal Elements: ";
    for (int i = 0; i < Size; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
    return 0;
}
