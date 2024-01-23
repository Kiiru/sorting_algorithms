#include "sort.h"

/**
 * change - switch two elements
 * 
 * @x: pointer to the first element to be swiched
 * @y: pointer to the second element to be switched
*/
void change(int *x, int *y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

/**
 * bubble_sort - Operation that sorts an array of integers in ascending order using bubble sort algorithm
 * 
 * @array: pointer to the array to be sorted
 * @size: Node/struct for the array
*/
void bubble_sort(int *array, size_t size)
{
    size_t i, j;

    if (size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        for 
    }
}