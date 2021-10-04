#include<stdio.h>


int main()
{
	FILE *fp;
    fp = fopen("my_path", "r");
    char buf[50];
    while( (fgets(buf, 50, fp) != NULL) ) {
    	printf("%s \n", buf);
   	}
    fclose(fp);
	
	return 0;
}
