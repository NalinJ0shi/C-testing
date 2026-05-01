#include <stdio.h>

int main(void)
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int (*p)[4] = arr; // pointer to array of 4 ints

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            int value = *(*(p + i) + j);
            printf("arr[%d][%d] = %d\n", i, j, value);
        }
    }

    return 0;
}
