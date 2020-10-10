public class NthNodeFromEndInnLinkedList {

    int nthPos = 0;
    ListNode nodeFound = null;

    public static void main(String[] args) {

        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(4);

        ListNode nthPosNode = getNthNodeFromEnd(head, 3);

        if (nthPosNode != null) {
            System.out.println(nthPosNode.val);
        } else {
            System.out.println(-1);
        }
    }

    static public ListNode getNthNodeFromEnd(ListNode head, int nthPos) {

        this.nthPos = nthPos;

        getNthNodeFromEnd(head);

        return nodeFound;
    }

    static public void getNthNodeFromEnd(ListNode head) {

        if (head == null) {
            return;
        }

        getNthNodeFromEnd(head.next);
        nthPos--;
        if (nthPos == 0) {
            nodeFound = head;
        }
    }

    static class ListNode {
        int val;
        ListNode next;

        public ListNode(int val) {
            this.val = val;
        }
    }
}