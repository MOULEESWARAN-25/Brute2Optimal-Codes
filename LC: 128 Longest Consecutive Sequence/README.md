### Example
- **Input:** `nums = [100, 4, 200, 1, 3, 2]`
- **Output:** `4` (The longest consecutive sequence is `[1, 2, 3, 4]`)

## Intuition
To solve the problem of finding the longest consecutive sequence, the key is to use a data structure that allows for fast lookups to check whether a consecutive number exists. A hash set is particularly suitable because it provides O(1) average time complexity for both insertion and lookup.

### Why Use a Hash Set?
By storing the numbers in a hash set, we can efficiently check if a number and its consecutive numbers exist. This is crucial for counting the length of consecutive sequences.

## Approach

### Step 1: Handle Edge Cases
- Check if the input array is empty. If it is, there are no numbers to form a sequence, so return 0.

### Step 2: Store Unique Numbers
- Use a hash set to store all the numbers from the array. This ensures that each number is stored only once and provides fast lookup.

### Step 3: Iterate Over the Hash Set
- For each number in the hash set:
  - Check if the previous number (`num - 1`) is not in the set. This helps identify the start of a new sequence.
  - If it's the start of a sequence, count the length of the current sequence by checking for consecutive numbers (`currentNum + 1`).
  - Update the maximum length found (`ans`) if the current sequence length is greater.

### Step 4: Return the Result
- After iterating through all numbers, return the maximum length of consecutive sequences found.

## Complexity Analysis

### Time Complexity
- **O(n)**: Each number is processed at most twice: once when adding it to the set and once when checking for consecutive sequences.

### Space Complexity
- **O(n)**: The space complexity is proportional to the number of unique elements in the input array since all unique elements are stored in the hash set.
