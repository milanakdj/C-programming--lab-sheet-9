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
 		isalpha(d[n])?al++:isdigit(d[n])?di++:isspace(d[n])?ws++:0;
 		n++;
	}
	printf("%d\n%d\n%d\n",al,di,ws);
 	return 0;
 }
