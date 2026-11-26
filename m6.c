
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    ptr1 = str1;
    ptr2 = str2;

    while(*ptr1 == *ptr2 && *ptr1 != '\0')
    {
        ptr1++;
        ptr2++;
    }

    if(*ptr1 == *ptr2)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }

    return 0;
}
