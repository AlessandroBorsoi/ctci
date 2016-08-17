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

int uniqueChars2(const char string[]) {
   char char_set[256] = {0};
   for (int i = 0; string[i] != '\0'; i++) {
       char val = string[i];
       if (char_set[val]) return NOT_UNIQUE;
       char_set[val] = 1;
   }
   return UNIQUE;
}