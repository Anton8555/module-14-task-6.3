#include <iostream>

int main() {
    const int n = 5;
    int arr[n][n];

    // initializations
    for(int count=0; count<n*n; count++) {
        // Here, several variables are made for clarity of calculations.
        // You can remove up to two variables if you wish.
        int row = count / n;
        int col = count % n;
        int flag = row % 2;  // [0, 1]: 0-even line; 1-odd line;
        int notFlag = -(flag-1);
        col = notFlag*(col) + flag*((n-1) - col);

        arr[row][col] = count;
    }

    // array output
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) {
            std::cout.width(3);
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
