#include <stdio.h>

void main()
{
  
  int a[10], i, j, min,n,temp;
  
  printf("Enter the number of elements\n");
  scanf("%d",n);
  
  printf("Enter the elements of array\n");
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        
  for(i=0; i<n-1; i++)
  {
     min = i;
          
     for(j=i+1; j<n; j++)
     {
        if(a[j]<a[min])
        {
           min = j;
        }
     }
          
     temp = a[min];
     a[i] = a[min];
     a[min] = temp;
  }
        
        printf("The sorted array is\n");

        for(i=0; i<n;i++)
        {
            printf("%d ",a[i]);
        }
}
