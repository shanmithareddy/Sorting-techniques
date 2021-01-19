#include <stdio.h>
/*int main()
{
 int a[100], n, i, j, position, swap;
 printf("Enter number of elements");
 scanf("%d", &n);
 printf("Enter %d Numbers", n);
 for (i = 0; i < n; i++)
 scanf("%d", &a[i]);*/


void selection(int arr[], int n)
 {
   int i,j,position,swap;
   for(i = 0; i < n - 1; i++)
   {
      position=i;
      for(j = i + 1; j < n; j++)
      {
        if(arr[position] > arr[j])
        position=j;
      }
    if(position != i)
      {  
       swap=arr[i];
       arr[i]=arr[position];
       arr[position]=swap;
      }
   }
 printf("selection Sorted elements\n");
 for(i = 0; i < n; i++)
 printf("%d\n", arr[i]);
 }
