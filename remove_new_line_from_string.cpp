#include<stdio.h>
#include<string.h>


int main()
{
	char str1[] = "faruk \n";
	char str2[] = "name: ";

	printf("%s", str1);
	str1[strcspn(str1, "\n")] = 0;
	printf("%s", str1);
	strcat(str2, str1);
	printf("%s", str2);
	
	return 0;
}
