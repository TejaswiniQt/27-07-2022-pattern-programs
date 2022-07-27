/******** C program to print the below pattern

  a
  A A
  a a a 
  A A A A 
  a a a a a

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
				printf("%c ",96+k);
			else
				printf("%c ",64+k);
		}
		printf("\n");
	}
	return 0;
}

