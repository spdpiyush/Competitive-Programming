/**
 * @author : Piyush Kumar
 * Problem Link : https://leetcode.com/problems/median-of-two-sorted-arrays/
 */

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] nums;
        double medianValue;
        if (nums1.length == 0) {
            if ((nums2.length) % 2 != 0) {
                medianValue = (double) nums2[((nums2.length + 1) / 2) - 1];
            }else {
                int mid1 = nums2[(nums2.length / 2)];
                int mid2 = nums2[(nums2.length / 2) - 1];
                medianValue = ((double) mid1 + (double) mid2)/2;
            }
        }else if (nums2.length == 0) {
            if ((nums1.length) % 2 != 0) {
                medianValue = (double) nums1[((nums1.length + 1) / 2) - 1];
            }else {
                int mid1 = nums1[(nums1.length / 2)];
                int mid2 = nums1[(nums1.length / 2) - 1];
                medianValue = ((double) mid1 + (double) mid2)/2;
            }
        }else {
            nums = new int[nums1.length + nums2.length];
            for (int k=0,i=0,j=0 ; k < nums1.length+nums2.length; k++) {

                if (i == -1) {
                    nums[k] = nums2[j++];
                }else if (j == -1) {
                    nums[k] = nums1[i++];
                }else if (nums1[i] <= nums2[j]) {
                    nums[k] = nums1[i++];
                    if (i == nums1.length) {
                        i = -1;
                    }
                }else {
                    nums[k] = nums2[j++];
                    if (j == nums2.length) {
                        j = -1;
                    }
                }
            }
            if ((nums.length % 2) != 0) {
                medianValue = (double) nums[((nums.length + 1) / 2) - 1];
            }else {
                int mid1 = nums[(nums.length / 2)];
                int mid2 = nums[(nums.length / 2) - 1];
                medianValue = ((double) mid1 + (double) mid2)/2;
            }
        }
        return medianValue;
    }
}

