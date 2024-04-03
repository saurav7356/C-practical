#include <stdio.h>
int main()
{
    int n, i, j, k = 9;
    printf("enter the number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <i; j++)
        {
            printf("%d", k);
        }
        if (j == n)
        {
            break;
        }
        else
        {
            printf("+");
        }
    }
    return 0;
}