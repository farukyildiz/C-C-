#include<stdio.h>
#include<string.h>

static char* concat_single_quote(char x[])
{
	char y[] = "'";
	strcat(y, x);
	strcat(y, "'");
    return y;
}


int main()
{
	char x[] = "deneme";
	
	char* y = concat_single_quote(x);
	printf(y);
	
	return 0;
}
