#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b = 0;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    printf("values of a and b = %d, %d\n", a, b);

    char str[50];
    printf("Enter your Name = ");
    scanf("%s", &str);
    int size = sizeof(str) / sizeof(str[0]);
    printf("Size of str = %d\n", size);
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
}