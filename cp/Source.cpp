/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)                                   // One by one move boundary of unsorted subarray
    {
        min_idx = i;                                            // Find the minimum element in unsorted array
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        int temp = arr[min_idx];                                // Swap the found minimum element with the first element
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size)                            /* Function to print an array */
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{

    int r, c, i, j, count;
    scanf("%d, %d", &r, &c);

    int* arr[r];
    for (i = 0; i < r; i++)
        arr[i] = (int*)malloc(c * sizeof(int));

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d ", &arr[i][j]);

    count = 0;
    for (i = 0; i < r; i++) {
        selectionSort(arr[r], c);
        printArray(arr[r], c);
    }


    for (int i = 0; i < r; i++)
        free(arr[i]);

    return 0;
}
