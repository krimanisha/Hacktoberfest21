#include <iostream>
#define N 9
using namespace std;

int grid[N][N] = {
    {3, 0, 6, 5, 0, 8, 4, 0, 0},
    {5, 2, 0, 0, 0, 0, 0, 0, 0},
    {0, 8, 7, 0, 0, 0, 0, 3, 1},
    {0, 0, 3, 0, 1, 0, 0, 8, 0},
    {9, 0, 0, 8, 6, 3, 0, 0, 5},
    {0, 5, 0, 0, 9, 0, 6, 0, 0},
    {1, 3, 0, 0, 0, 0, 2, 5, 0},
    {0, 0, 0, 0, 0, 0, 0, 7, 4},
    {0, 0, 5, 2, 0, 6, 3, 0, 0}};

// check whether num is present in col or not
bool isPresentInCol(int col, int num)
{
    for (int row = 0; row < N; row++)
    {
        if (grid[row][col] == num)
        {
            return true;
        }
    }
    return false;
}

// check whether num is present in row or not
bool isPresentInRow(int row, int num)
{
    for (int col = 0; col < N; col++)
    {
        if (grid[row][col] == num)
        {
            return true;
        }
    }
    return false;
}

// check whether num is present in 3x3 box or not
bool isPresentInBox(int boxStartRow, int boxStartCol, int num)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (grid[row + boxStartRow][col + boxStartCol] == num)
            {
                return true;
            }
        }
    }
    return false;
}

// get empty location and update row and column
bool findEmptyPlace(int &row, int &col)
{
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            // marked with 0 is empty
            if (grid[row][col] == 0)
            {
                return true;
            }
        }
    }
    return false;
}
bool isValidPlace(int row, int col, int num)
{
    // when item not found in col, row and current 3x3 box
    return !isPresentInRow(row, num) && !isPresentInCol(col, num) && !isPresentInBox(row - row % 3, col - col % 3, num);
}
bool solveSudoku()
{
    int row, col;
    if (!findEmptyPlace(row, col))
    {
        return true; // when all places are filled
    }

    // valid numbers are 1 - 9
    for (int num = 1; num <= 9; num++)
    {
        // check validation, if yes, put the number in the grid
        if (isValidPlace(row, col, num))
        {
            grid[row][col] = num;

            // recursively go for other rooms in the grid
            if (solveSudoku())
            {
                return true;
            }

            // backtrack
            grid[row][col] = 0; // turn to unassigned space when conditions are not satisfied
        }
    }
    return false;
}

void printGrid()
{
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
            cout << grid[row][col] << " ";
        cout << endl;
    }
}

int main()
{
    if (solveSudoku() == true)
    {
        printGrid();
    }
    else
    {
        cout << "No solution exists";
    }
}
