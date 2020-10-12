public class MergeTwoSortedLinkedList {

    public static void main(String[] args) {

        ListNode head = new ListNode(2);
        head.next = new ListNode(3);
        head.next.next = new ListNode(4);
        head.next.next.next = new ListNode(5);


        ListNode head2 = new ListNode(2);
        head2.next = new ListNode(3);
        head2.next.next = new ListNode(4);
        head2.next.next.next = new ListNode(5);

        printList(mergeTwoSortedLinkedList(head, head2));

    }

    static void printList(ListNode head) {
        while (head != null) {
            System.out.print(head.val + " ");
            head = head.next;
        }
    }

    static ListNode mergeTwoSortedLinkedList(ListNode head1, ListNode head2) {

        if (head1 == null && head2 == null) {
            return null;
        }

        if (head1 == null) {
            return head2;
        }
        if (head2 == null) {
            return head1;
        }

        ListNode head = null; // head of new list

        ListNode resHead = null;

        while (head1 != null && head2 != null) {

            if (head1.val <= head2.val) {
                ListNode node = new ListNode(head1.val);
                if (head == null) {
                    head = node;
                    resHead = head;
                } else {
                    head.next = node;
                    head = head.next;
                }
                head1 = head1.next;
            } else {
                ListNode node = new ListNode(head2.val);
                if (head == null) {
                    head = node;
                    resHead = head;
                } else {
                    head.next = node;
                    head = head.next;
                }
                head2 = head2.next;
            }

        }

        while (head1 != null) {
            head.next = new ListNode(head1.val);
            head1 = head1.next;
            head = head.next;
        }

        while (head2 != null) {
            head.next = new ListNode(head2.val);
            head2 = head2.next;
            head = head.next;
        }

        return resHead;
    }

    static class ListNode {
        int val;
        ListNode next;

        public ListNode(int val) {
            this.val = val;
        }
    }
}