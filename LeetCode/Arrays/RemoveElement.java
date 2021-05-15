
/**
 * @author : Piyush Kumar ( spdpiyush )
 * <p>
 *     Question Link : https://leetcode.com/problems/remove-element/
 * </p>
 */
public class RemoveElement {

    public int removeElement(int[] nums, int val) {
        int length = 0;
        for (int i = 0, j = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                length++;
                nums[j++] = nums[i];
            }
        }
        return length;
    }
}



