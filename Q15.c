//15.Check Identity Matrix
#include<stdio.h>
int main(){
    int m,n;

    printf("Enter number of rows:");
    scanf("%d",&m);

    printf("Enter number of columns:");
    scanf("%d",&n);

    if (m != n)
    {
        printf("Not an Identity Matrix\n");
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

    int flag = 1;   

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                flag = 0;
            }
            else if (i != j && a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
        printf("Identity Matrix\n");
    else
        printf("Not Identity Matrix\n");

    return 0;
}