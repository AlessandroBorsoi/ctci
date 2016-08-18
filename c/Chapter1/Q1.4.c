#include <stdio.h>
#include <ctype.h>
#include "Chapter1.h"

#define ANAGRAM 1
#define NOT_ANAGRAM 0

void toLowerString(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        tolower(string[i]);
    }
}

int partition(char string[], int left, int right) {
    swap(left, (left + right) / 2, string);
    int pivot = string[left];
    int pivotpos = left;
    for (int i = left + 1; i <= right; i++) {
        if (string[i] < pivot)
            swap(++pivotpos, i, string);
    }
    swap(left, pivotpos, string);
    return pivotpos;
}

void quickSort(char string[], int left, int right) {
    if (left < right) {
        int pivot = partition(string, left, right);
        quickSort(string, left, pivot - 1);
        quickSort(string, pivot + 1, right);
    }
}

int isAnagram(char string1[], char string2[]) {
    toLowerString(string1);
    quickSort(string1, 0, len(string1) - 1);
    toLowerString(string2);
    quickSort(string2, 0, len(string2) - 1);
    for (int i = 0; string1[i] != '\0'; i++) {
        if (string1[i] != string2[i]) return NOT_ANAGRAM;
    }
    return ANAGRAM;
}