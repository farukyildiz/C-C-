#include<stdio.h>
#include<string.h>


int main()
{
	char str1[] = "123";
	char str2[] = "'";
	
	strcat(str2, str1);
	strcat(str2, "'");
	
	printf("%s", str2);
	
	return 0;
}
