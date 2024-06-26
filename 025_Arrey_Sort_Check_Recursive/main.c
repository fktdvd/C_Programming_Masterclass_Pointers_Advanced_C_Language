/**
 * Példa a Lecture 41-hez.
 * 2024-06-12
 * Recursive solutioin
 * fktdvd
 */

/**
 * Write a function checks if the arrey is '"Really sorted", "Sorted", "Not Sorted".
 * RETURN 1 and PASS 1 by reference if the arrey is "Really sorted"
 * RETURN 1 and PASS 0 by reference if the arrey is "Sorted"
 * RETURN 0 and PASS 0 by reference if the arrey is "Not sorted"
 *
 * Example1: [1,2,5,7,10]  --> Really Sorted.   R-1 P-1     // For Any Pair: Left Element < Right Element
 * Example2: [1,2,2,5,10]  --> Sorted.          R-1 P-0     // For Any Pair: Left Element <= Right Element
 * Example3: [1,2,5,3,10]  --> Not Sorted.      R-0 P-0
 */

#include <stdio.h>

#define SIZE 5

int checkIsSortedRecursive(int *arr, int size, int *isReallySorted)
{
    int result;    // returned result
    if (size == 1) // The arrey has just one element
    {
        *isReallySorted = 1; // We will assume that the arrey is really sorted
        return 1;
    }
    result = checkIsSortedRecursive(*arr, size - 1, isReallySorted);

    if (result != 0 && arr[size - 1] == arr[size - 2]) // If the arrey is Really Sorted / Sorted AND last elements are equal
    {
    }
}

int main()
{
    int var1 = -1;
    int var2 = -1;

    int arr[SIZE] = {1, 2, 5, 7, 10};
    var1 = SortCheck(arr, &var2, SIZE);
    VarEval(&var1, &var2);

    int arr2[SIZE] = {1, 2, 2, 5, 10};
    var1 = SortCheck(arr2, &var2, SIZE);
    VarEval(&var1, &var2);

    int arr3[SIZE] = {1, 2, 5, 3, 10};
    var1 = SortCheck(arr3, &var2, SIZE);
    VarEval(&var1, &var2);

    return 0;
}
