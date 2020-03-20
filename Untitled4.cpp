 #include<stdio.h>
 int main()
 {
 	int n=0;
	char d[60];
 	printf("enter a line of text \n");
 	
 	scanf("%[^\n]",d);
 	
 	while(d[n]!='\0')
 	{
 		printf("%c\n",d[n]);
 		n++;
	 }
 	return 0;
 }
