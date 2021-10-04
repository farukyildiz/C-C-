#include<stdio.h>
#include<string.h>


int main() {
	
	char str[] = "'12333','4523'";
	char search[] = "'333'";
	char *ptr = strstr(str, search);
	
	if (ptr != NULL) /* Substring found */
	{
		printf("'%s' contains '%s'\n", str, search);
	}
	else /* Substring not found */
	{
		printf("'%s' doesn't contain '%s'\n", str, search);
	}
	
	return 0;
}
