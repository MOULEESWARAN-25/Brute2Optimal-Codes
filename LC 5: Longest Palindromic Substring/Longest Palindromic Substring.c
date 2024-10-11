int ispalin(int i, int j, char str[]) {
    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

char* longestPalindrome(char* str) {
    int len = strlen(str);
    int idx = 0;
    int max = 0;
    int start = 0;
    int end = 0;

    for (int i = 0; i < len; i++) {
        for (int j = len - 1; j >= idx; j--) {
            if (str[i] == str[j]) {
                if (ispalin(i, j, str)) {
                    if (max < j - i + 1) {
                        max = j - i + 1;
                        start = i;
                        end = j;
                    }
                    idx = j;
                }
            }
        }
    }

    char* temp = (char*)malloc((max + 1) * sizeof(char));
    if (temp == NULL) {
        return NULL; 
    }

    int a = 0;
    for (int i = start; i <= end; i++) {
        temp[a++] = str[i];
    }
    temp[a] = '\0'; 

    return temp; 
}
