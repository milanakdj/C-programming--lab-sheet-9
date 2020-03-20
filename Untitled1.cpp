 #include<stdio.h>
 int main()
 {
 	int a[10],n;
 	while(n<10)
 	{
 	printf("enter %d value\n",n+1);
 	scanf("%d",&a[n]);
 	n++;
 	}
 	n=0;
 	while(n<10)
 	{
 		printf("\n%d\n",a[n]);
 		n++;
	 }
 	return 0;
 }
