void swap(int start, int end, char s[]) {
    while (start < end) {
        s[start] = s[start] + s[end];
        s[end] = s[start] - s[end];
        s[start] = s[start] - s[end];
        start++;
        end--;
    }
}

char* reverseStr(char* s, int k) {
    int len = strlen(s);
    
    for (int i = 0; i < len;) {
        if (len - i < k) {
            swap(i, len - 1, s);
            break;
        }
        
        swap(i, i + k - 1, s);
        i += 2 * k;
    }
    
    return s;
}
