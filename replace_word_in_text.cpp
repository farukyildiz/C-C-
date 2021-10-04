#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* replaceWord(char* text, char* oldWord, char* newWord)
{
	char* result;
	int i, count = 0;
	int newWordlen = strlen(newWord);
	int oldWordlen = strlen(oldWord);

	for (i = 0; text[i] != '\0'; i++) {
		if (strstr(&text[i], oldWord) == &text[i]) {
			count++;
			i += oldWordlen - 1;
		}
	}

	result = (char*)malloc(i + count * (newWordlen - oldWordlen) + 1);

	i = 0;
	while (*text) {
		if (strstr(text, oldWord) == text) {
			strcpy(&result[i], newWord);
			i += newWordlen;
			text += oldWordlen;
		}
		else
			result[i++] = *text++;
	}

	result[i] = '\0';
	return result;
}

// Driver Program
int main()
{
	char text[] = "https://www.ankarabarosu.org.tr/ 127.0.0.1/berqnet.logosgt.com.tr - GET myip=127.0.0.1 myport=9083";
	char old_word[] = " - ";
	char new_word[] = " faruk ";

	char* result = NULL;

	printf("Eski text: %s\n", text);
	result = replaceWord(text, old_word, new_word);
	printf("Yeni text: %s\n", result);

	free(result);
	return 0;
}

