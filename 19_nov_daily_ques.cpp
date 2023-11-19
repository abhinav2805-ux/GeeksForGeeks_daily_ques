


                                                                                  //Intersection of two sorted Linked lists


class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {    Node*H = NULL;
        Node*T = NULL;
        Node*t1 = head1;
        Node*t2 = head2;
        while(t1 and t2){
            if(t1->data < t2->data){
                t1 = t1->next;
            }
            else if(t2->data < t1->data){
                t2 = t2->next;
            }
            else{
                Node*t = new Node(t1->data);
                if(!H){
                    H = t;
                    T = t;
                }
                else{
                    T->next=t;
                    T=t;
                }
                t1=t1->next;
                t2=t2->next;
            }
        }
        return H;
}
};
