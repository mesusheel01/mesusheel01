#include <stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,m,n,sum=0;
    printf("Enter the order of array \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of 2-D array \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
              b[j][i]=a[i][j];       
              }
        }
  printf("The first matrix of order %dx%d is \n",m,n);
       for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
printf("Matrix after transpose is \n");
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");

    }
}