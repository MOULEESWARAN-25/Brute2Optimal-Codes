int cmp(const void *a, const void *b){
    return (*(int *)a - *(int *)b);  // Compare two integers
}

int singleNumber(int* nums, int size) {
    qsort(nums, size, sizeof(int), cmp);  // Sort the array
    
    for(int i = 0; i < size - 1; i += 2) {
        if (nums[i] != nums[i + 1]) {  // Check if a pair is unequal
            return nums[i];  // Return the single number
        }
    }
    
    return nums[size - 1];  // Single number is at the end
}
