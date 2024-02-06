#include "search_algos.h"

/**
* print_array - Prints an array of integers
*
* @array: The array to be printed
* @low: low part of the array
* @high: high part of the array
*/
void print_array(int *array, int low, int high)
{
    int i;

    printf("Searching in array: ");
    for (i = low; i < high; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);
}

/**
* binary_search - searches for a value in a sorted array of
* integers using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
    int low, mid, high;

    if (!array)
        return (-1);

    low = 0;
    high = (int)size - 1;

    while (low <= high)
    {
        print_array(array, low, high);
        mid = low + (high - low) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}
