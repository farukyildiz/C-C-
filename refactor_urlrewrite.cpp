#include<stdio.h>
#include<string.h>
#include<unistd.h>


// http://www.ankarabarosu.org.tr/ 127.0.0.1/berqnet.logosgt.com.tr - GET myip=127.0.0.1 myport=9083

static char* split_string(char* line, char* delim, int index)
{
	char * split_line = strtok(line, delim);
	char* result = "";
	
	int i = 1;
	while (split_line != NULL) {
		if (i == index) {
			result = split_line;
			break;
		}
		++i;
		split_line = strtok(NULL, delim);
	}
	
	return result;
}


int main(int argc, char* argv[])
{
	int in_group = 0;
	int ad_enabled = 0;
	char line[100] = "http://www.ankarabarosu.org.tr/ 127.0.0.1/berqnet.logosgt.com.tr - GET myip=127.0.0.1 myport=9083";
	char* ldap_user_prefix = "ldap_user_";
	char* ldap_group_prefix = "ldap_group_";
	char* hotspot_prefix = "hotspot_";
	
	FILE *fp;
	char* user;
	char* ip_str = split_string(line, " ", 2);
	char* ip = split_string(ip_str, "/", 1);
	printf("ip: %s \n", ip);
	
	if (ad_enabled == 1) {
		
		// char ip2user_path[50] = "/var/cache/dc/ip2user/";
		// char group2user_path[50] = "/var/cache/dc/groups/";
		
		char ip2user_path[99] = "C:/Users/faruk.yildiz/Desktop/urlrewriter/ip2user/";
		char group2user_path[99] = "C:/Users/faruk.yildiz/Desktop/urlrewriter/groups/";
		
		strcat(ip2user_path, ip);
		strcat(ip2user_path, ".txt");
		printf("%s \n", ip2user_path);
		
	    fp = fopen(ip2user_path, "r");
	    char buf1[50];
	    while( (fgets(buf1, 50, fp) != NULL) ) {
	    	user = buf1;
	   	}
	    fclose(fp);
	    printf("user: %s \n", user);
		//FILE *fp;
	    fp = fopen("C:/Users/faruk.yildiz/Desktop/urlrewriter/group_in_conf.txt", "r");
	    char buf2[999];
	    while( (fgets(buf2, 999, fp) != NULL) ) {
	    	strcat(group2user_path, buf2);
	    	strcat(group2user_path, "/");
	    	strcat(group2user_path, user);
	    	strcat(group2user_path, ".txt");
	    	printf("group to user: %s \n", group2user_path);
	    	if (access(group2user_path, F_OK) == 0) {
				printf("%s in %s group \n", user, buf2);
				in_group = 1;
			}
	   	}
	   	
	   	if (in_group == 0 && user != "" && user != NULL) { 
	   		printf("set ldap group [ %s ] user text \n", user);
	   		printf("");
		} else if (in_group == 1) {
			printf("");
		}
	}
	
	char hotspot_path[99] = "C:/Users/faruk.yildiz/Desktop/urlrewriter/hotspot/";
	strcat(hotspot_path, ip);
	strcat(hotspot_path, ".txt");
   	if (access(hotspot_path, F_OK) == 0) {
		fp = fopen(hotspot_path, "r");
	    char buf3[99];
	    while( (fgets(buf3, 99, fp) != NULL) ) {
	    	user = buf3;
	   	}
	   	if (user != "" && user != NULL) { 
	   		printf("set hotspot [ %s ] user text \n", user);
	   		printf("");
		}
	}
	
	printf("line: %s \n", line);
	printf("");
	   		
    fclose(fp);
	
	return 0;
}
