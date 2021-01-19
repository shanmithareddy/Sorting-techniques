#include<stdio.h>
#include "header.h"

void bubblesort(int arr[], int n)
   {
	 int i,j,temp;
   for(i=n-2;i>=0;i--)
   {
      for(j=0;j<=i;j++)
      {
        if(arr[j]>arr[j+1])
	{
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
      }
   }
   
   printf("bubble Sorted elements: ");
   for(i=0;i<n;i++)
     printf(" %d\n",arr[i]);
   }
