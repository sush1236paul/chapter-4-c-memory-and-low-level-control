#include <stdio.h>

int main()
{
    char name[] = "Sushant";

    int length = 0;

    while(name[length] != '\0')
    {
        length++;
    }

    printf("Length = %d\n", length);

    return 0;
}
