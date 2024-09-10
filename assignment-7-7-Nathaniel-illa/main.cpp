#include "main.hpp"

int main()
{
    const int NUM_ROWS = 6; // Number of rows
    const int NUM_COLS = 5; // Number of columns
    int result[SIZE] = {0};
    int numbers[NUM_ROWS][NUM_COLS] = {{2, 7, 9, 6, 4},
                                       {6, 1, 8, 10, 4},
                                       {4, 3, 7, 2, 9},
                                       {9, 9, 0, 3, 1},
                                       {8, 8, 7, 8, 9},
                                       {1, 2, 1, 2, 3}};

    findMaxSum(result, numbers, NUM_ROWS, NUM_COLS);
    cout << "The row with the maximum sum is:";
    for (int i = 0; i < NUM_COLS; i++)
        cout << setw(5) << result[i];
    cout << endl;

    findMaxElm(result, numbers, NUM_ROWS, NUM_COLS);
    cout << "The maximum values in each row are:\n";
    for (int i = 0; i < NUM_ROWS; i++)
        cout << setw(5) << result[i] << endl;

    findMaxVal(result, numbers, NUM_ROWS, NUM_COLS);
    cout << "The row containing the maximum value is:";
    for (int i = 0; i < NUM_COLS; i++)
        cout << setw(5) << result[i];
    cout << endl;

    return 0;
}