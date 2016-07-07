#include <stdio.h>

#define UNIQUE 1
#define NOT_UNIQUE 0

int uniqueChars(const char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        int j = i + 1;
        while (string[j] != '\0') {
            if (string[i] == string[j]) 
                return NOT_UNIQUE;
            j++;
        }
        i++;
    }
    return UNIQUE;
}