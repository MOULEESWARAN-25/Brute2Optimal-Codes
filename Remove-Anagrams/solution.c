#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_anagram(char *a, char *b) {
    int arr[26] = {0};

    if (strlen(a) != strlen(b)) {
        return 0;
    }

    for (int i = 0; i < strlen(a); i++) {
        arr[a[i] - 'a']++;
        arr[b[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] != 0) {
            return 0;
        }
    }

    return 1;
}

char** removeAnagrams(char** str, int size, int* returnSize) {
    char **store = (char**)malloc(size * sizeof(char*));
    int x = 0;

    store[x++] = str[0];

    for (int i = 1; i < size; i++) {
        if (!is_anagram(str[i], str[i-1])) {
            store[x++] = str[i];
        }
    }

    *returnSize = x;
    return store;
}
