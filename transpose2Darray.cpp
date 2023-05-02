#include <iostream.h>
#include <conio.h>

const int ROWS = 3;
const int COLS = 3;

void transpose(int arr[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = i + 1; j < COLS; j++) {
            // Swap elements at (i, j) and (j, i)
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Print the original array
    cout << "Original array:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose the array
    transpose(arr);

    // Print the transposed array
    cout << "Transposed array:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
