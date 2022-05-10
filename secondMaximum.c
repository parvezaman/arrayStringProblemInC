#include <stdio.h>
int main()
{
    int num[5000], count = 0, max1 = 0, max2 = num[0];
    printf("input the array of number seperated by space: ");
    do
    {
        scanf("%d", &num[count]);
        count++;
    } while (getchar() != '\n');

    num[count];
    for (int i = 0; i < count; i++)
    {
        if (num[i] >= max1)
        {
            max1 = num[i];
        }
    }
    for (int i = 0; i < count; i++)
    {
        if ((num[i] >= max2) && (max1 > num[i]))
        {
            max2 = num[i];
        }
    }
    printf("max1: %d max2: %d\n", max1, max2);
    printf("The second max is %d\n", max2);
    return 0;
}