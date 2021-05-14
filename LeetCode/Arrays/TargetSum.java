import java.util.HashMap;
import java.util.Map;

/**
 * @author : Piyush Kumar ( spdpiyush )
 * <p>
 *     Question Link : https://leetcode.com/problems/two-sum/
 * </p>
 */
public class TargetSum {

    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] result = solution.twoSumOptimalApproach(new int[] {3, 2, 4}, 6);
        for (int value: result) {
            System.out.println(value);
        }
    }
}

/**
 * <p>
 *     Brute Force Approach.
 *     Time Complexity : O(n * (n-1)) ~ O(n^2)
 *     Space Complexity : O(1)
 * </p>
 */
class Solution {
    /**
     * <p>
     *     Brute Force Approach.
     *     Time Complexity : O(n * (n-1)) ~ O(n^2)
     *     Space Complexity : O(1)
     * </p>
     */
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = i+1; j < nums.length ; j++) {
                if ((nums[i] + nums[j]) == target) {
                    return new int[] {i , j};
                }
            }
        }
        throw new IllegalArgumentException("Target not matched");
    }

    /**
     *  Time Complexity : O(n)
     * @param nums
     * @param target
     * @return int[]
     */
    public int[] twoSumOptimalApproach(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i =0 ; i < nums.length ; i++) {
            map.put(nums[i], i);
        }
        for (int i = 0; i < nums.length; i++) {
            int diff = target - nums[i];
            if (map.containsKey(diff) && map.get(diff) != i) {
                return new int[] {i, map.get(diff)};
            }
        }
        throw new IllegalArgumentException("Target Not Matched");
    }
}


