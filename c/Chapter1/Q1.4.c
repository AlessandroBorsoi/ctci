#include <stdio.h>
#include "Chapter1.h"

#define ANAGRAM 1
#define NOT_ANAGRAM 0

int isAnagram(char string[]) {
    int i = 0, j = len(string) - 1;
    while (i < j)
        if (string[i++] != string[j--]) 
            return NOT_ANAGRAM;
    return ANAGRAM;
}