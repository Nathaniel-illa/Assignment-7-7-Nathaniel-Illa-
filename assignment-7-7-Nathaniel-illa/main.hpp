#include <iostream>
#include <iomanip>
using namespace std;

void findMaxSum(int[], int[][5], int, int);
void findMaxElm(int[], int[][5], int, int);
void findMaxVal(int[], int[][5], int, int);
const int SIZE = 10;

void findMaxSum(int result[], int num[][5], int rows, int cols)
{
    int maxSum = -1;
    int maxRow = 0;

    for (int i = 0; i < rows; ++i)
    {
        int sum = 0;
        for (int j = 0; j < cols; ++j)
        {
            sum += num[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }

    for (int j = 0; j < cols; ++j)
    {
        result[j] = num[maxRow][j];
    }
}

void findMaxElm(int result[], int num[][5], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        int maxElem = num[i][0];
        for (int j = 1; j < cols; ++j)
        {
            if (num[i][j] > maxElem)
            {
                maxElem = num[i][j];
            }
        }
        result[i] = maxElem;
    }
}

void findMaxVal(int result[], int num[][5], int rows, int cols)
{
    int maxVal = num[0][0];
    int maxRow = 0;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (num[i][j] > maxVal)
            {
                maxVal = num[i][j];
                maxRow = i;
            }
        }
    }

    for (int j = 0; j < cols; ++j)
    {
        result[j] = num[maxRow][j];
    }
}