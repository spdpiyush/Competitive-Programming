/**
 * @author : Piyush Kumar
 * Problem Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution {
    public int lengthOfLongestSubstring(String s) {
        char[] ch = s.toCharArray();
        Map<Character, Integer> map = new HashMap<>();
        int max = ch.length==0 ? 0 : 1;
        int count = 1;
        for (int i=0, j=0; i < ch.length - 1; ) {
            map.put(ch[i], 1);
            if (max == ch.length) {
                break;
            }
            if (ch[j] != ch[j+1]  && !map.containsKey(ch[j+1])) {
                map.put(ch[j+1], 1);
                j++;
                count++;
                if (count > max) {
                    max = count;
                }
                if (j == (ch.length - 1)) {
                    i++;
                    j=i;
                    count=1;
                }
            }else {
                map.clear();
                i++;
                j = i;
                count = 1;
            }
        }
        return max;
    }
}

