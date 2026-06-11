#include <stdio.h>

int main()
{
    int age = 19;
    float height = 5.8;
    double pi = 3.14159265359;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Pi: %.11lf\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}
