//10.Sum of Each Row
#include<stdio.h>
int main(){
    int m,n;

    printf("Enter number of rows:");
    scanf("%d",&m);

    printf("Enter number of columns:");
    scanf("%d",&n);

    int a[m][n];

    printf("Enter elements:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int rowSum = 0;  

        for (int j = 0; j < n; j++)
        {
            rowSum += a[i][j];  
        }

        printf("Sum of row %d = %d\n", i, rowSum);
    }

    return 0;
}