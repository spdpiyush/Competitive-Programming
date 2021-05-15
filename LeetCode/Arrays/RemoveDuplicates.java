class Solution {
	public int removeDuplicates(int[] nums) {
        int length = 1;
        for(int i = 0; i < nums.length-1; i++) {
            if (nums[i] == nums[i+1]) {
                nums[length - 1] = nums[i];
            }else {
                length++;
                nums[length - 1] = nums[i+1];
            }
        }
        return length;
    }
}
