#include <iostream>
using namespace std;
const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    double numbers[n][SIZE];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> numbers[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "sum of column"<<i+1<<sumColumn(numbers, n, i)<<endl;
    }
    //cout << sumColumn(numbers, 2, 3) << endl;
}
