#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("passwords.txt", "r");

    if(file == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    char line[100];

    while(fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
