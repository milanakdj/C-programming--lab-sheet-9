#include<stdio.h>

int main()
{
	int age[10];
	int i,j,ss,temp;
	printf("enter the age of ten person\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&age[i]);
		ss+=age[i];
	}
	
	
	
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(age[i]<age[j])
			{
				temp=age[i];
				age[i]=age[j];
				age[j]=temp;
			}
		}
	}
	
		for(i=0;i<10;i++)
	{
		printf("%d\n",age[i]);
		
	}

	return 0;
}
