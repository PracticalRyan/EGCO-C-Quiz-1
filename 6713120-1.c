#include <stdio.h>
void main()
{
    int input;
    printf("Integer: ");
    scanf("%d", &input);
    for (int iterate = input; iterate > 0; iterate--)
    {
        for (int i = 1; i <= iterate; i++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}