#include <stdio.h>
void main()
{
    int a[10],i,j,t=0,n;
    printf("Enter the length of the array a\n");
      scanf("%d",&n);
      printf("Enter the elements of this array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        printf("Working on the pass %d\n",i+1);
        for(j=0;j<n-1-i;i++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;;
            }
        }
    }
    printf("Array after sorting \n");
    for(j=0;j<n;i++)
        printf("%d ",a[j]);
}
