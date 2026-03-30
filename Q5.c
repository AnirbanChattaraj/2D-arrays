// 5. Find Maximum Element
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter number of rows:");
    scanf("%d", &m);
    printf("Enter number of columns:");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter number of elements:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        printf("\n");
    }
    printf(" The maximum element is:%d ", max);
    return 0;
}