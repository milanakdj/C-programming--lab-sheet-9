 #include<stdio.h>
 int main()
 {
 	int a[10],n;
 	int i,j;
 	while(n<10)
 	{
 	printf("enter %d value\n",n+1);
 	scanf("%d",&a[n]);
 	n++;
 	}
 	for(i=0;i<9;i++)
 	{
 		for(j=i;j<10;j++)
 		{
 			if(a[i]>a[j])
 			{
 				n=a[i];
 				a[i]=a[j];
 				a[j]=n;
			 }
		 }
	 }
	 
	n=0;
 	while(n<10)
 	{
 	printf("enter %d value is %d\n",n+1,a[n]);
 	
 	n++;
 	}
	 for(i=0;i<9;i++)
 	{
 		for(j=i;j<10;j++)
 		{
 			if(a[i]<a[j])
 			{
 				n=a[i];
 				a[i]=a[j];
 				a[j]=n;
			 }
		 }
	 }
	 
	n=0;
 	while(n<10)
 	{
 	printf("enter %d value is %d\n",n+1,a[n]);
 	
 	n++;
 	}
 	return 0;
 }
