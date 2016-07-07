#import <stdlib.h>
#import "Chapter1.h"

char* replaceSpaces(const char string[]) {
    int spaces = 0;
    int len = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            spaces++;
        }
        len++;
    }
    int newLen = len + spaces * 2;
    char* newString = (char*)malloc(sizeof(char)*(newLen + 1));
    int i = 0, j = 0; 
    while (i < newLen) {
        if (string[j] != ' ') {
            newString[i++] = string[j++];
        } else {
            newString[i] = '%'; i++;
            newString[i] = '2'; i++;
            newString[i] = '0'; i++;
            j++;
        }
    }
    newString[i] = '\0';
    return newString;
}