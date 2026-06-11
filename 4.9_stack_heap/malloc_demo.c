#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = malloc(sizeof(int));

    *ptr = 25;

    printf("Value: %d\n", *ptr);

    free(ptr);

    return 0;
}
