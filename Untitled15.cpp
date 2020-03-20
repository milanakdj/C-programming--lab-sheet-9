 #include<stdio.h>
 #include<ctype.h>
 #include<string.h>
 int main()
 {
 	int n=0,i=0,j=0;
	char d[60];
	char e[60];
	char p[10][20];
	int m=0,ss=0;
 	printf("enter a line of text \n");
 	
 	scanf("%[^\n]",d);
 	
// 	
// 	for(i=0;i<strlen(d);i++)
// 	{
// 		
// 		if(isspace(d[i]))
// 		{
// 			
// 			for(j=ss;j<i;j++)
// 			{
// 				p[m][n]=d[j];
// 				n++;
//			}
//			ss=i+1;
//			p[m][n]='\0';
//			printf("\n%s\n",p[m]) ;
//			m++;
//			n=0;
//		 }
//		 
//	}

	for(i=0;i<(strlen(d)+1);i++)
	{
		if(d[i]!=' ' && d[i]!='\0')
		{
			p[m][n]=d[i];
			n++;
		}
		
		else if(d[i]==' ' || d[i]=='\0')
		{
			p[m][n]='\0';
			printf("%s\n",p[m]);

			m++;
			n=0;
		}
		
	}
 	return 0;
 }
