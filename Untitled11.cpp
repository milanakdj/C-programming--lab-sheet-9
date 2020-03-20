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
 	for(i=0;i<strlen(text);i++)
 	{
		if(isalpha(text[i]))
			{
				if(islower(text[i]))
				{
					text[i]=toupper(text[i]);
				}
				
				else if(isupper(text[i]))
				{
					text[i]=tolower(text[i]);
				}
			}
	
	}
	
	printf("%s",text);
	
 	return 0;
 }
