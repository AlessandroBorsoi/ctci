#include <stdio.h>

void removeDuplicates(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        for (int j = i + 1; string[j] != '\0'; j++) {
            if (string[i] == string[j]) {
                for (int k = j; string[k] != '\0'; k++) {
                    string[k] = string[k + 1];
                }
                j--;
            }
        }
    }
}