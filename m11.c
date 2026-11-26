
#include <stdio.h>

int length(char *s)
{
    int count = 0;

    while(*s != '\0')
    {
        count++;
        s++;
    }

    return count;
}

void copy(char *s1, char *s2)
{
    while(*s1 != '\0')
    {
        *s2 = *s1;
        s1++;
        s2++;
    }

    *s2 = '\0';
}

int compare(char *s1, char *s2)
{
    while(*s1 == *s2 && *s1 != '\0')
    {
        s1++;
        s2++;
    }

    if(*s1 == *s2)
        return 0;
    else
        return 1;
}

int main()
{
    char str1[100], str2[100], str3[100];

    int choice;

    int (*ptr1)(char *);
    void (*ptr2)(char *, char *);
    int (*ptr3)(char *, char *);

    ptr1 = length;
    ptr2 = copy;
    ptr3 = compare;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("1. String Length\n");
    printf("2. Copy String\n");
    printf("3. Compare Strings\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Length = %d", ptr1(str1));
    }
    else if(choice == 2)
    {
        ptr2(str1, str3);
        printf("Copied string = %s", str3);
    }
    else if(choice == 3)
    {
        if(ptr3(str1, str2) == 0)
            printf("Strings are equal");
        else
            printf("Strings are not equal");
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}
