#include <iostream>
#include <climits>
#include <vector>

using namespace std;

bool linearSearch(int mat[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int getMaxSum(int mat[][3], int rows, int cols)
{
    int maxRowSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        /* code */
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}

int diagonalSum(int mat[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
        if (i != n - i - 1)
        {
            sum += mat[i][n - i - 1];
        }
    }
    return sum;
}

int main()
{
    // int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int> > matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int rows = 3;
    int col = 3;

    // cout << matrix[2][1] << endl;

    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < col; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    // cout << linearSearch(matrix, rows, col, 7) << endl;

    // cout << getMaxSum(matrix, rows, col) << endl;

    // cout << diagonalSum(matrix, rows);
    cout << matrix[1][2];

    return 0;
}