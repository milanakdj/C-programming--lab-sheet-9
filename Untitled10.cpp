 #include<stdio.h>
 #include<ctype.h>
 #include<string.h>
 int main()
 {
 	int n=0,al=0,i=0,j=0;
	char d[60];char e[60];char s[2];
 	printf("enter a line of text \n");
 	
 	scanf("%[^\n]",d);
 	int nn='n';
 	int aa='a';
 	int nnn,aaa;
 	for(i=0;i<strlen(d);i++)
 	{
 		aaa=d[i];
 		nnn=d[i+1];
 		if(aaa==aa && nnn==nn)
 		{
 			d[i]='#';
 			printf("%c",d[i]);
 			d[i+1]='#';
		 }
 		
	}
	printf("%s",d);
 	return 0;
 }
