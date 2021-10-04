#include<stdio.h>
#include<string.h>


// http://www.ankarabarosu.org.tr/ 127.0.0.1/berqnet.logosgt.com.tr - GET myip=127.0.0.1 myport=9083

int main()
{
	char line[100] = "http://www.ankarabarosu.org.tr/ 127.0.0.1/berqnet.logosgt.com.tr - GET myip=127.0.0.1 myport=9083";
	char * split_line = strtok(line, " ");
	
	while (split_line != NULL) {
		printf("%s \n", split_line);
		split_line = strtok(NULL, " ");
	}
	
	printf("line: %s", line);
	
	return 0;
}
