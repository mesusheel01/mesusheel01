#include <stdio.h>
void main()
{
    int a[10][10],i,j,sum=0,m,n;
    printf("Enter the order of matrix\n");
    scanf("%d %d",&m,&n);
    if(m<10 && n<10)
    {
        printf("Enter the elements of 2-D array\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
    printf("The matrix of order %dx%d is :\n",m,n);
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               printf("%d ",a[i][j]);
               sum=sum+a[i][j];
           }
           printf("\n");
     }
     printf("The sum of all elements in this array is : %d\n",sum);
}