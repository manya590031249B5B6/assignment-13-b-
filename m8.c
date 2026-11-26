
#include <stdio.h>

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}

int factorial(int n)
{
    int fact = 1, i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, choice;

    int (*ptr[3])(int) = {square, cube, factorial};

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("1. Square\n");
    printf("2. Cube\n");
    printf("3. Factorial\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 3)
    {
        printf("Result = %d", ptr[choice - 1](n));
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}
