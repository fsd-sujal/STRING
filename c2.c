#include<stdio.h>

main()
{
	char ch;
	printf("Enter The Value Of ch = ");
	scanf("%c",&ch);
	
	if(ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
	}
	
	printf("The Uppercase Ch is = %c",ch);		
}

