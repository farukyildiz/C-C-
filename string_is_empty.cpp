#include<stdio.h>
#include<string.h>


int main() {
	
	char x[5] = "test";
	
	
	if (strcmp(x, "") != 0) {
		printf("x: %s", x);
	}
	
	return 0;
}
