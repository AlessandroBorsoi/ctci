#include <string.h>
#include "Chapter1.h"

#define TRUE 1
#define FALSE 0

int isSubstring(const char string[], const char sub[]) {
    int lenString = len(string);
    int lenSub = len(sub);
    for (int i = 0; i <= lenString - lenSub; i++) {
        for (int j = 0, k = i; j < lenSub; j++, k++) {
            if (sub[j] != string[k]) break;
            if (j == lenSub - 1 && sub[j] == string[k])
                return TRUE;
        }
    }
    return FALSE;
}

int isRotationString(const char string[], const char rotation[]) {
    int lenString = len(string);
    int lenRotation = len(rotation);
    if (lenString != lenRotation) return FALSE;
    char concat[lenString*2+1];
    strcat(concat, string);
    strcat(concat, string);
    if (isSubstring(concat, rotation)) return TRUE;
    return FALSE;
}