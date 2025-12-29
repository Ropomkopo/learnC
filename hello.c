#include <stdio.h>
int age = 25;
float height = 1.75;
char letter = 'A';

int main()
{
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Letter: %c\n", letter);

    if (age > 18)
    {
        printf("You are an adult.\n");
    }
    else
    {
        printf("You are a minor.\n");
    }

    if (age == 25 && height > 1.5)
    {
        printf("You are 25 years old and taller than 1.5 meters.\n");
    }
    else if (age > 25 || height > 1.5)
    {
        printf("You are either 25 years old or taller than 1.5 meters.\n");
    }
}