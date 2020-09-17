#include<stdio.h>
void main()
{
    int arr[100],i,a,j,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
         scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]<arr[j])
           {
               a=arr[i],arr[i]=arr[j],arr[j]=a;
           }
        }
    }
    printf("The numbers in descending order: \n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}