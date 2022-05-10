#include <stdio.h>
int main()
{
    int count = 0, num[10000], sum = 0;
    do
    {
        scanf("%d", &num[count]);
        count++;
    } while (getchar() != '\n' && count < 100);

    num[count];

    for (int i = 0; i < count; i++)
    {
        sum += num[i];
    }
    printf("\nSum of all elements = %d", sum);

    return 0;
}