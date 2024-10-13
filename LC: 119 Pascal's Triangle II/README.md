# Pascal's Triangle Row Generator

## Intuition
Pascal's Triangle is constructed in such a way that:
- The first and last elements of every row are always 1.
- Every other element is the sum of the two elements directly above it from the previous row.

To generate a specific row of the triangle:
- The 0th row is simply `[1]`.
- The 1st row is `[1, 1]`.
- The 2nd row is `[1, 2, 1]`, where each inner element is the sum of the elements from the previous row: `2 = 1 + 1`.
- This pattern continues for all subsequent rows.

## Approach

### Step 1: Base Case
- If the requested row number is 0, we simply return `[1]` because that's the first row of Pascal's Triangle.

### Step 2: Dynamic Array Allocation
- We create a 2D array to store the values of Pascal's Triangle up to the requested row.
- Each row `i` will contain `i + 1` elements, which are allocated dynamically.

### Step 3: Filling the Triangle
- **Initialize the First Two Rows:**
  - Set the value of the first row to `1`.
  - For rows greater than 0, the second row is initialized as `[1, 1]`.
  
- **Use Nested Loops to Fill in the Values:**
  - For rows starting from index 2, set the first and last elements to 1.
  - For each middle element, calculate its value as the sum of the two elements from the previous row: `arr[i][j] = arr[i-1][j-1] + arr[i-1][j]`.

### Step 4: Result Preparation
- Allocate an array to store the final result, which corresponds to the requested row of Pascal's Triangle.
- Copy the values from the last row of the 2D array into this result array.

### Step 5: Return the Result
- Set the size of the returned array (`returnSize`) to the number of elements in the row.
- Return the dynamically allocated array containing the desired row's values.

## Complexity Analysis

### Time Complexity
- **O(n²)**: The outer loop iterates over each row up to the requested row `n`, and the inner loop can iterate up to `n` times in the worst case.

### Space Complexity
- **O(n²)**: The additional 2D array is used to store the values of Pascal's Triangle up to the requested row.
