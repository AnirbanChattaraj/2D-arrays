//14.Replace Negative Numbers with 0
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);
   int a[m][n];
   printf("Enter number of elements:");
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
   }
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        if (a[i][j]<0)
        {
            a[i][j]=0;
        }
   }
   printf("\n");
}
for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        printf("%d ",a[i][j]);
   }
   printf("\n");
}
return 0;
}