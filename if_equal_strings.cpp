#include<stdio.h>
#include<string.h>


int main () {

    char result[24] = "true";
    if (strcmp(result, "true") == 0) {
        printf("%s", result);
    }   
    return 0;
}

