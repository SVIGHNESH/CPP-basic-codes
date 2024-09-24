#include <iostream>
using namespace std;

bool isPresent(int a[][3], int target) {
    // Check if the element exists in any position of the 2D array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int a[3][3];

    // Row-wise input
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cin >> a[row][col];
        }
    }

    int target;

    cout << "Enter the element to search:" << endl;
    cin >> target;

    if(isPresent(a, target)) {
        cout << "Element is present" << endl;
    } else {
        cout << "Element is not present" << endl;
    }

    return 0;
}
