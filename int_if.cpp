#include<stdio.h>


int main()
{
	int i = 3;
	char* x = "";
	char* y = "";
	char* z = "";
		
	if (0 < i) {
		x = "define: x";
	}
	if (1 < i) {
		y = "define: y";
	}
	if (2 < i) {
		z = "define: z";
	}
	
	printf("%s \n", x);
	printf("%s \n", y);
	printf("%s \n", z);
	
	return 0;
}
