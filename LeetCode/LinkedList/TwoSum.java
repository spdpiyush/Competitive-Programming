
class ListNode {
    int val;
    ListNode next;
    public ListNode() {}
    public ListNode(int val) {
        this.val = val;
    }
    public ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode listNode = null;
        ListNode listNode1 = null;
        int sum;
        int value;
        int rem = 0;
        int firstValue = 0;
        int secondValue = 0;
        while (l1 != null || l2 != null) {
            if (l1 != null && l2 != null) {
                firstValue = l1.val;
                secondValue = l2.val;
                l1 = l1.next;
                l2 = l2.next;
            }else if (l1 == null && l2 != null) {
                firstValue = 0;
                secondValue = l2.val;
                l2 = l2.next;
            }else {
                firstValue = l1.val;
                secondValue = 0;
                l1 = l1.next;
            }
            if (rem == 0) {
                sum = firstValue + secondValue;
            }else {
                sum = firstValue + secondValue + 1;
            }
            if (sum > 9) {
                value = sum % 10;
                rem = 1;
            }else {
                value = sum;
                rem = 0;
            }
            if (listNode == null) {
                listNode = new ListNode(value, null);
                listNode1 = listNode;
            }else {
                ListNode node = new ListNode(value, null);
                listNode1.next = node;
                listNode1 = node;
            }
        }
        if (rem == 1) {
            ListNode node = new ListNode(1, null);
            listNode1.next = node;
        }
        return listNode;
    }
}
