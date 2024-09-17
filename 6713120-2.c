#include <stdio.h>
void main()
{
    float array[10];
    float input_array;
    // Get Array
    printf("An Array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &input_array);
        array[i] = input_array;
    }

    // Move Values
    int input_move;
    printf("N: ");
    scanf("%d", &input_move);
    for (int move = 0; move < input_move; move++)
    {
        float first = array[0];
        for (int i = 0; i < 9; i++)
        {
            array[i] = array[i + 1];
        }
        array[9] = first;
    }
    // Print Values
    printf("Output: ");
    for (int i = 0; i < 10; i++)
    {

        printf("%.1f ", array[i]);
    }
    printf("\nThe middle: %.1f, %.1f", array[4], array[5]);
}