//8.Count Positive, Negative, and Zero
#include<stdio.h>
int main(){
    int m,n,count=0,count1=0,count2=0;
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
       if (a[i][j]>0)
       {
        count++;
       }
       else if (a[i][j]<0)
       {
        count1++;
       }
       else{
        count2++;
       }
   }
   printf("\n");
}
printf("Number of +ve numbers are:%d\n",count);
printf("Number of -ve numbers are:%d\n",count1);
printf("Number of ZEROS  are:%d",count2);
return 0;
}