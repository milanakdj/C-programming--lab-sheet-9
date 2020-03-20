 #include<stdio.h>
 int main()
 {
 	int a[10],n;
 	int e=0,o=0;
 	while(n<10)
 	{
 	printf("enter %d value\n",n+1);
 	scanf("%d",&a[n]);
 	if (a[n]%2==0)
 	e++;
 	else
 	o++;
 	n++;
 	}
 	n=0;
 	while(n<10)
 	{
 		printf("\n%d\n",a[n]);
 		n++;
	 }
	 printf("the total number of even numbers are %d and the total number of odd numbers is %d",e,o);
	 
 	return 0;
 }
