#include<stdio.h>
void quicksort(int number[25],int first,int last){
   int i, j, r, temp;

   if(first<last){
      r=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[r]&&i<last)
            i++;
         while(number[j]>number[r])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[r];
      number[r]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main(){
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
}
