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
 		if(isalpha(d[n]))
		 if(tolower(d[n])=='a')
		 	ws++;
		 
 		n++;
	}
	printf("%d\n",ws);
 	return 0;
 }
