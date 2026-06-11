#include <stdio.h>

int main()
{
    int age = 19;

    int *ptr = &age;

    printf("Age: %d\n", age);
    printf("Pointer: %p\n", ptr);

    printf("Value using pointer: %d\n", *ptr);

    return 0;
}
