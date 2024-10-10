## Find Single Number in Array

### Intuition
The problem is to find the single number in an array where every other number appears exactly twice. A simple approach is to sort the array first and then find the number that does not have a duplicate next to it.

### Approach
1. **Sorting:**
   - First, we sort the array using the `qsort` function, which allows us to efficiently group duplicate numbers together.
   
2. **Iteration:**
   - After sorting, we iterate through the array with a step of 2 to compare each pair of numbers:
     - If the two adjacent numbers are equal, we continue to the next pair.
     - If they are not equal, the current number is the single number.
   
3. **Edge Case:**
   - If the loop completes without finding the single number, the single number must be the last element in the array. This case occurs when the single number is located at the end of an odd-length array.

### Complexity
- **Time Complexity:** O(n log n) – Sorting the array takes O(n log n) and the subsequent iteration through the array takes O(n). Therefore, the overall time complexity is dominated by the sorting step.
  
- **Space Complexity:** O(1) – The `qsort` function sorts the array in place, meaning no additional space proportional to the input size is needed.
