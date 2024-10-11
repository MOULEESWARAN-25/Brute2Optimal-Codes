## Intuition
The goal is to find the longest substring within a given string that reads the same forwards and backwards. A naive approach would involve checking every possible substring, which can be inefficient. Instead, by leveraging the characteristics of palindromes, we can check pairs of characters and expand outward, minimizing unnecessary checks.

## Approach

1. **Helper Function:**
   - `ispalin(int i, int j, char str[])`: This function checks if the substring from index `i` to `j` is a palindrome by iterating from both ends towards the center. It returns 1 if it's a palindrome and 0 otherwise.

2. **Main Function:**
   - `longestPalindrome(char* str)`: 
     - **Initialization**: 
       - `len`: Calculate the length of the input string using `strlen()`.
       - `idx`: Keep track of the last checked character index.
       - `max`: Store the maximum length of the palindrome found.
       - `start` and `end`: Track the starting and ending indices of the longest palindrome.

     - **Nested Loops**:
       - Outer loop (i): Iterate through each character in the string.
       - Inner loop (j): Iterate backwards from the end of the string to `idx`. This loop finds characters that match `str[i]`.
       - **Palindrome Check**: If `str[i]` and `str[j]` match, the `ispalin` function is called to check if the substring between `i` and `j` is a palindrome.
       - **Update Logic**: If a palindrome is found and its length (`j - i + 1`) is greater than the current maximum (`max`), update `max`, `start`, and `end` with the new values.
       - Update `idx` to the current `j` to avoid redundant checks in subsequent iterations.

3. **Result Construction**:
   - Allocate memory for a temporary string `temp` to hold the longest palindromic substring. The size is `max + 1` to accommodate the null terminator.
   - Check if memory allocation was successful. If not, return `NULL`.
   - Copy the longest palindromic substring from the original string to `temp`.
   - Append a null terminator to the end of `temp`.

4. **Return Statement**: Finally, return the `temp` string containing the longest palindromic substring.

## Complexity
- **Time Complexity**: O(n²) – The algorithm iterates through the string and checks for palindromes, resulting in quadratic complexity.
- **Space Complexity**: O(n) – Space is used for storing the longest palindrome found. The space used in the `ispalin` function is constant and does not depend on the input size.
