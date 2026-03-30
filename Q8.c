//8. Print Main Diagonal (Square Matrix)
#include<stdio.h>
int main(){
    int m,n;

    printf("Enter number of rows:");
    scanf("%d",&m);

    printf("Enter number of columns:");
    scanf("%d",&n);

    if (m != n)
    {
        printf("Not a square matrix\n");
        return 0;
    }

    int a[m][n];

    printf("Enter elements:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Main diagonal elements:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i][i]);  
    }

    return 0;
}