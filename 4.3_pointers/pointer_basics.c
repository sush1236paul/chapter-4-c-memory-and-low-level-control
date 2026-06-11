#include <stdio.h>

int main()
{
    int age = 19;

    int *ptr = &age;

    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);

    printf("Pointer stores: %p\n", ptr);

    return 0;
}
