
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    printf("Enter a string: ");
    scanf("%s", str1);

    ptr1 = str1;
    ptr2 = str2;

    while(*ptr1 != '\0')
    {
        *ptr2 = *ptr1;

        ptr1++;
        ptr2++;
    }

    *ptr2 = '\0';

    printf("Original string = %s\n", str1);
    printf("Copied string = %s\n", str2);

    return 0;
}

