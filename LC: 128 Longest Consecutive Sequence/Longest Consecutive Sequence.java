class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }

        HashSet<Integer> freq = new HashSet<>();
        for (int num : nums) {
            freq.add(num); 
        }

        int count = 0;
        int ans = 0;
        for (int num : freq) { 
            // Check if the number is the start of a sequence
            if (!freq.contains(num - 1)) {
                int currentNum = num;
                count = 1; 
                // Count consecutive numbers
                while (freq.contains(currentNum + 1)) {
                    currentNum++;
                    count++;
                }
                ans = Math.max(ans, count);
            }
        }

        return ans; 
    }
}
