#include <stdio.h>
int main()
{
    int num[100];
    printf("Input elements: ");
    // int length = sizeof(num) / sizeof(num[0]);
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += num[i];
    }
    printf("\nSum of all elements = %d", sum);

    return 0;
}