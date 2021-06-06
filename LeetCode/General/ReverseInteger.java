/**
 * @author : Piyush Kumar
 * Problem Link : https://leetcode.com/problems/reverse-integer/
 */
class Solution {
    public int reverse(int x) {
       boolean isNegative = false;
        if (x < 0) {
            isNegative = true;
            x *= -1;
        }
        long reverseNumber = 0l;
        while (x > 0) {
            reverseNumber = (reverseNumber * 10) + (x % 10);
            x /= 10;
        }
        if (!isNegative) {
            if (reverseNumber > Integer.MAX_VALUE) {
                return 0;
            }
            return (int) reverseNumber;
        }else {
            reverseNumber = (-1) * reverseNumber;
            if (reverseNumber < Integer.MIN_VALUE) {
                return 0;
            }
            return (int) reverseNumber;
        } 
    }
}
