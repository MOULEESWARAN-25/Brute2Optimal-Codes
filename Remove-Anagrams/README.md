## Remove Consecutive Anagrams

### Intuition
The problem asks us to remove consecutive anagrams from a list of words. An anagram is a word formed by rearranging the letters of another word. The first idea that comes to mind is to iterate through the list and compare each word with the previous one to see if they are anagrams. If they are not anagrams, we keep the word in the result list.

### Approach
1. **Anagram Check:** We define a helper function `is_anagram` that checks if two words are anagrams by counting the frequency of each character in both words and comparing the counts.
2. **Iteration:** We iterate through the list of words. We always keep the first word. For each subsequent word, we check if it is an anagram of the previous word. If it is not, we add it to the result list.
3. **Result Storage:** We store the words that are not anagrams of their previous word in a new list. This list will be our result.

### Complexity
- **Time complexity:** O(n × m), where n is the number of words and m is the average length of the words. This is because, for each pair of consecutive words, we compare their character frequencies, which takes O(m) time.
- **Space complexity:** O(n) for storing the result list. The auxiliary space for the frequency count array is constant O(1) as it always holds 26 elements regardless of input size.
