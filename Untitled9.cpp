 #include<stdio.h>
 #include<ctype.h>
 int main()
 {
 	int n=0,al=0,di=0,ws=0;
	char d[60];
 	printf("enter a line of text \n");
 	
 	scanf("%[^\n]",d);
 	
 	while(d[n]!='\0')
 	{
 		isspace(d[n])?ws++:0;
 		n++;
	}
	printf("%d\n",1+ws);
 	return 0;
 }
