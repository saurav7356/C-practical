#include <stdio.h>
int main()
{
    int i, j, n;
    float sum = 1.0;
    printf("enter the number :");
    scanf("%d", &n);
    printf("1");
    for (i = 2; i <= n; i++)
    {
        printf(" + 1/%d", i);
        sum = sum + (1.0 / i);
    }
    printf("\nsum = %f", sum);
    return 0;
}