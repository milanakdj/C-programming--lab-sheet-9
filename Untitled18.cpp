 #include<stdio.h>
 #include<string.h>
 #include<ctype.h>
 int main()
 {
 	int n=0,al=0,di=0,ws=0;
	char text[60];
 	printf("enter a line of text \n");
 	
 	scanf("%[^\n]",text);
 	int i=0;
 	int val;
	if(isalpha(text[i]))
	val=1;
 	for(i=0;i<strlen(text);i++)
 	{
		if(isalpha(text[i]))
			{
				if(val)
				{
					text[i]=toupper(text[i]);
				}
				
				else
				{
					text[i]=tolower(text[i]);
				}
			}
	
	}
	
	printf("%s",text);
	
 	return 0;
 }
