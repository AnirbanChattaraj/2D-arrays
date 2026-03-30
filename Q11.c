//11. Sum of Each Column
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

    for (int j = 0; j < n; j++)     
    {
        int colSum = 0;

        for (int i = 0; i < m; i++)   
        {
            colSum += a[i][j];
        }

        printf("Sum of column %d = %d\n", j, colSum);
    }

    return 0;
}