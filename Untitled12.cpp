 #include<stdio.h>
 #include<string.h>
 #include<ctype.h>
 int main()
 {
 	int n=0,al=0,di=0,ws=0;
	char text[60];
 	printf("enter a line of text \n");
 	
 	scanf("%[^\n]",text);
 	int i;
 	char check;
 	for(i=0;i<strlen(text);i++)
 	{
		if(isalpha(text[i]))
			{
				check=tolower(text[i]);
				if(check=='a' ||check=='i' ||check=='e' ||check=='u' ||check=='o')
				{
					text[i]='*';
				}
				
			}
	
	}
	
	printf("%s",text);
	
 	return 0;
 }
