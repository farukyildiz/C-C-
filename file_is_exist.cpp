#include<stdio.h>
#include<unistd.h>


int main()
{    	
	if (access("my_path", F_OK) == 0) {
		printf("file is exist");
	} else {
		printf("file is not exist");
	}
	
	
	return 0;
}
