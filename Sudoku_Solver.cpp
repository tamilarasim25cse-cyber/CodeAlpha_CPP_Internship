#include <iostream>
using namespace std;

bool isSafe(int grid[9][9], int row, int col, int num)
{
    for (int x = 0; x < 9; x++)
        if (grid[row][x] == num || grid[x][col] == num)
            return false;

    int sr = row - row % 3;
    int sc = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[sr + i][sc + j] == num)
                return false;

    return true;
}

bool solve(int grid[9][9])
{
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (grid[row][col] == 0)
            {
                for (int num = 1; num <= 9; num++)
                {
                    if (isSafe(grid, row, col, num))
                    {
                        grid[row][col] = num;

                        if (solve(grid))
                            return true;

                        grid[row][col] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int grid[9][9] = {
        {3,0,6,5,0,8,4,0,0},
        {5,2,0,0,0,0,0,0,0},
        {0,8,7,0,0,0,0,3,1},
        {0,0,3,0,1,0,0,8,0},
        {9,0,0,8,6,3,0,0,5},
        {0,5,0,0,9,0,6,0,0},
        {1,3,0,0,0,0,2,5,0},
        {0,0,0,0,0,0,0,7,4},
        {0,0,5,2,0,6,3,0,0}
    };

    if (solve(grid))
    {
        cout << "Solved Sudoku:\n";
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
                cout << grid[i][j] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "No Solution Exists";
    }

    return 0;
}
