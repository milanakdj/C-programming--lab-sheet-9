#include<stdio.h>
int main()
{
	char a[4];
	printf("enter a 4 digit number\n");
	scanf("%s",a);
	int i=0;
	for(i=0;i<4;i++)
	{
		if(a[i]=='1')
		printf("One\t");
		else if(a[i]=='2')
		printf("Two\t");
		else if(a[i]=='3')
		printf("Third\t");
		else if(a[i]=='4')
		printf("Four\t");
		else if(a[i]=='5')
		printf("Five\t");
		else if(a[i]=='6')
		printf("Six\t");
		else if(a[i]=='7')
		printf("Seven\t");
		else if(a[i]=='8')
		printf("Eight\t");
		else if(a[i]=='9')
		printf("Nine\t");
		
	}
	return 0;
}
