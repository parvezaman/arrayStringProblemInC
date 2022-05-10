#include <stdio.h>
int main()
{
    int num[1000], count = 0, max = 0, frequency = 0;
    printf("input your numbers: ");
    do
    {
        scanf("%d", &num[count]);
        count++;
    } while (getchar() != '\n');
    // max = num[0];
    num[count];
    for (int i = 0; i < count; i++)
    {
        if (num[i] >= max)
        {
            max = num[i];
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (max == num[i])
        {
            frequency++;
        }
    }

    printf("Maximum is %d\n", max);
    printf("Maximum occurs %d times", frequency);

    return 0;
}