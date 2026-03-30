//12.Find Position of an Element
#include<stdio.h>
int main(){
    int m,n,search;

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

    printf("Enter element to search:");
    scanf("%d",&search);

    int found = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == search)
            {
                printf("Found at position (%d, %d)\n", i, j);
                found = 1;
                break;   
            }
        }
        if (found) break;  
    }

    if (!found)
    {
        printf("Element not found\n");
    }

    return 0;
}