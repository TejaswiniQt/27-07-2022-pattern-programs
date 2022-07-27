/******** C program to print the below pattern

  a
  2 2
  c c c 
  4 4 4 4 
  e e e e e

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,val,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2 != 0)
				printf("%c ",96+i);
			else
				printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

