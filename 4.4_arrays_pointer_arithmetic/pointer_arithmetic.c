#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("numbers[0] = %d\n", numbers[0]);
    printf("*(numbers+0) = %d\n", *(numbers+0));

    printf("numbers[2] = %d\n", numbers[2]);
    printf("*(numbers+2) = %d\n", *(numbers+2));

    return 0;
}
