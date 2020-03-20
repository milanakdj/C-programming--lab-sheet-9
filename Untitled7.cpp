 #include<stdio.h>
 #include<ctype.h>
 int main()
 {
 	int n=0,al=0,v=0,c=0;
	char d[60];
 	printf("enter a line of text \n");
 	
 	scanf("%[^\n]",d);
 	
 	while(d[n]!='\0')
 	{
 		if(isalpha(d[n]))
 		{
 			d[n]=toupper(d[n]);
 			if(d[n]=='A'||d[n] =='O'||d[n] =='E'||d[n] =='I'||d[n] =='U')
 			v++;
 			else
 			c++;
 			al++;
		 }
 		n++;
	}
	printf("%d\n%d\n%d\n",al,v,c);
 	return 0;
 }
