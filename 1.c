#include<stdio.h>

main()
{
	char ch;
	printf("Enter The Value Of ch = ");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
	}
	
	printf("The Lowercase Ch is = %c",ch);		
}


