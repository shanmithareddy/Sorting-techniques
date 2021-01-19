#include<stdio.h>
#include "header.h"
void quicksort(int arr[],int first,int last)
{ 
   int i, j, r, temp;
   {
   if(first<last)
   {
      r=first;
      i=first;
      j=last;

      while(i<j)
      {
         while(arr[i]<=arr[r]&&i<last)
            i++;
         while(arr[j]>arr[r])
            j--;
         if(i<j)
	 {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[r];
      arr[r]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);

   }
  }
    printf("quick Sorted elements: ");
    for(i=0;i<last;i++)
    printf("%d\n",arr[i]);
}


/*int main(){
   int i, count, number[25];

   printf("enter total number of entries: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d\n",number[i]);

   return 0;
}*/
