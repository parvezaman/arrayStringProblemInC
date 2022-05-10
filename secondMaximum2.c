#include <stdio.h>
#include <limits.h>
int main()
{
    int count = 0, num[10], max1, max2;
    printf("input the numbers: ");
    do
    {
        scanf("%d", &num[count]);
        count++;
    } while (getchar() != '\n' && count <= 10);

    num[count];
    max1 = max2 = INT_MIN;

    for (int i = 0; i < count; i++)
    {
        if (num[i] > max1)
        {
            max2 = max1;
            max1 = num[i];
        }
        else
        {
            max1 = num[i];
        }
    }
    // printf("\nlength: %d  count: %d", sizeof(num) / sizeof(num[0]), count);
    printf("second max is %d", max2);
    return 0;
}