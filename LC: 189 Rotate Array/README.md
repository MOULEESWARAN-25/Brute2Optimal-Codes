# Array Rotation by K Positions

## Problem Statement
Given an array and a number `k`, the goal is to rotate the array elements to the right by `k` positions. For example:
- **Input:** `arr = [1, 2, 3, 4, 5]`, `k = 2`
- **Output:** `[4, 5, 1, 2, 3]`

## Intuition
To understand how to rotate an array, think of it as splitting the array into two parts:
1. **Last k Elements:** These elements will move to the front of the array.
2. **Remaining Elements:** These elements will shift to the right.

### Visualization
For better understanding, let's visualize the process:
- Original array: `[1, 2, 3, 4, 5]`
- After rotating by `k = 2`, the last two elements `[4, 5]` come to the front, while the others shift to the right:
  - Before rotation: `[1, 2, 3, 4, 5]`
  - After rotation:  `[4, 5, 1, 2, 3]`

## Approach

### Step 1: Handle Edge Cases
- If `k` is greater than the size of the array, we can simplify our work by calculating `k = k % size`. This helps us avoid unnecessary full rotations since rotating an array by its length does not change it.

### Step 2: Copy Last K Elements
- Create a temporary array called `store` to hold the last `k` elements of the original array. This ensures we do not lose these elements during the rotation.

### Step 3: Shift the Remaining Elements
- We will then shift the first `size - k` elements to the right. This involves moving elements from the end of the original array to their new positions, effectively making room for the `store` elements at the beginning.

### Step 4: Insert the Stored Elements
- Finally, we copy the elements from the `store` array back into the first `k` positions of the original array.

## Complexity Analysis

### Time Complexity
- **O(n)**: The function performs three linear passes over the array:
  1. Copying the last `k` elements to `store` takes **O(k)**.
  2. Shifting the first `size - k` elements takes **O(size - k)**.
  3. Copying back the `store` array to the beginning takes **O(k)**.
  
Overall, the total time complexity is **O(n)**, where `n` is the size of the array.

### Space Complexity
- **O(k)**: The space complexity comes from the temporary `store` array that holds the last `k` elements. Therefore, the space complexity is **O(k)**.
