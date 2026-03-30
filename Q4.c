//4.Find Sum of All Elements
#include<stdio.h>
int main(){
    int m,n,sum=0;
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
        sum+=a[i][j];
   }
   printf("\n");
}
 printf("The sum is:%d ",sum);
return 0;
}