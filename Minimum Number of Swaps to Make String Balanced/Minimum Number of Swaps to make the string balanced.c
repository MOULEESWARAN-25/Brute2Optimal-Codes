int minSwaps(char* s) {
    int len = strlen(s);  // Get length of string
    char stack[len + 1];  // Stack to track unmatched brackets
    int a = 0;            // Variable to count unmatched brackets
    
    for (int i = 0; i < len; i++) {
        stack[a] = s[i];  // Add current character to stack
        if (a >= 1 && (stack[a] == ']' && stack[a - 1] == '[')) {
            a -= 1;  // Found a match, pop the stack
        } else {
            a++;  // No match, keep the character in the stack
        }
    }

    // Calculate minimum number of swaps
    if (a % 4 == 0) {
        return a / 4;
    }
    return (a == 0) ? 0 : (a / 4) + 1;  // Account for leftover unmatched brackets
}
