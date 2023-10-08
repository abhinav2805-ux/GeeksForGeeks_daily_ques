



                             //Insert in a Sorted List




/*class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }*/

// sortedInsert method should return the head of the modified linked list.
class Solution {
    Node sortedInsert(Node head1, int key) {
        // Add your code here
        Node a=new Node(key);
        if(key<head1.data){
            a.next=head1;
            return a;
        }
        Node head=head1;
        while(head.next!=null){
            if(head.data<=key && head.next.data>=key){
                a.next=head.next;
                head.next=a;
                return head1;
            }
            head=head.next;
        }
        head.next=a;
        return head1;
    }
}
