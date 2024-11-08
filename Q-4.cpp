#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Enter dimensions for the 3D arrays (x, y, z): ";
    cin >> x >> y >> z;

    int A[x][y][z], B[x][z][y], C[x][y][y];

    cout << "Enter elements of 3D array A:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "A[" << i << "][" << j << "][" << k << "]: ";
                cin >> A[i][j][k];
            }
        }
    }

    cout << "Enter elements of 3D array B:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < z; j++) {
            for (int k = 0; k < y; k++) {
                cout << "B[" << i << "][" << j << "][" << k << "]: ";
                cin >> B[i][j][k];
            }
        }
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < y; k++) {
                C[i][j][k] = 0;
            }
        }
    }

    for (int i = 0; i < x; i++) { 
        for (int j = 0; j < y; j++) { 
            for (int k = 0; k < y; k++) { 
                for (int l = 0; l < z; l++) { 
                    C[i][j][k] += A[i][j][l] * B[i][l][k];
                }
            }
        }
    }

    cout << "Result of 3D array multiplication (array C):" << endl;
    for (int i = 0; i < x; i++) {
        cout << "Part " << i << ":" << endl;
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < y; k++) {
                cout << C[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
