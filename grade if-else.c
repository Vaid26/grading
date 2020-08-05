#include<stdio.h>
void main()
{
	int m;
	printf("Enter the marks: ");
	scanf("%d",&m);
	if(85<=m && m<=100)
	{
		printf("\n Grade A");
	}
	else if(70<=m && m<=84)
	{
		printf("\n Grade B");
	}
	else if(55<=m && m<=69)
	{
		printf("\n Grade C");
    }
	else if(40<=m && m<=54)
	{
		printf("\n Grade D");
	}
	else
	{
		printf("\n Grade F");
	}
	}
