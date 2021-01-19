
#include<stdio.h>
#include"header.h"

int main()
{
	int a[100];
//	int a[10]={8,5,2,6,1,9,34,12,3,0};
	int ch, size,i,q=1;
//	size=10;
	printf("enter the number of elements in array\n" );
	scanf("%d",&size);
	printf("enter array elemnets\n");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
//	printf("select sorting techniques:\n");
//      printf("\n\n1)insertion\n2)bubble\n3)select\n4)quick\n5)merge\n6)quit\n");

	while(q)
	{
	printf("select sorting techniques:\n");
	printf("\n\n1)insertion\n2)bubble\n3)select\n4)quick\n5)merge\n6)quit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		

		case 1:insert(a,size);break;
		       
		case 2:bubblesort(a,size);break;

		case 3:selection(a,size);break;

		case 4:quicksort(a,0,size);break;

		case 5:merge(a,size);break;
		
		case 6: q=0;break;       

		        
	}


	
	}
}
