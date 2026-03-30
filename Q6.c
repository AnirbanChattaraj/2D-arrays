//6.Find Minimum Element
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
    int min = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
        printf("\n");
    }
    printf(" The minimum element is:%d ", min);
    return 0;
}