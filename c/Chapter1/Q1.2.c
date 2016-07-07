#include <stdio.h>

int len(const char string[]) {
    int len = 0;
    while (string[len] != '\0') len++;
    return len;
}

void swap(int i, int j, char string[]) {
    char tmp = string[i];
    string[i] = string[j];
    string[j] = tmp;
}

void reverseString(char string[]) {
    int length = len(string);
    int i = 0, j = length - 1;
    while (i < j) {
        swap(i++, j--, string);
    }
}