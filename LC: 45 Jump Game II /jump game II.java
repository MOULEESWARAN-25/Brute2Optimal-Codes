class Solution {
    public int jump(int[] nums) {
        int left = 0;
        int len = nums.length;
        int count = 1;
        if(len == 1){
            return 0;
        }
        while (left < len) {
            if (nums[left] >= len - left - 1) {
                return count;
            }
            int temp = nums[left];
            int current = 1;
            int max = -1;
            int nextIndex = left;
            
            while (current <= temp && left + current < len) {
                if (max < (left + current) + nums[left + current]) {
                    max = (left + current) + nums[left + current];
                    nextIndex = left + current;
                }
                current++;
            }
            
            left = nextIndex;
            count++;
        }
        return count;
    }
}
