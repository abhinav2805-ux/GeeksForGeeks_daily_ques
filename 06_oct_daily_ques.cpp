
                                                            //Reverse alternate nodes in Link List



class Solution
{
    public static void rearrange(Node odd)
    {
        if(odd.next==null || odd.next.next==null) return;
        Node a=odd;
        Node b=new Node(-1);
        while(a.next!=null && a.next.next!=null){
            Node c=a.next;
            a.next=a.next.next;
            if(b.next==null){
            b.next=c;
            c.next=null;
            }
            else{
                Node d=b.next;
                b.next=c;
                c.next=d;
            }
            a=a.next;
        }
        if(a.next==null){
            a.next=b.next;
        }
        else{
            a=a.next;
            a.next=b.next;
        }
    
        
    }
}
