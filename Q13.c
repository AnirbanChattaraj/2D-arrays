//13.Count Even and Odd Elements
#include<stdio.h>
int main(){
    int m,n,count=0,count1=0;
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
       if (a[i][j]%2==0)
       {
       count++;
       }
       else{
        count1++;
       }
   }
   printf("\n");
}
printf("No of even elements are:%d\n",count);
printf("No of odd elements are:%d",count1);
return 0;
}