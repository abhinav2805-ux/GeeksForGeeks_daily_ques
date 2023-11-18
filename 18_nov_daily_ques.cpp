


                                                                    //Reverse a Doubly Linked List
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
    Node* curr = head;
        Node* pichla = NULL;
        Node* agla = NULL;

        while (curr != NULL) {
            agla = curr->next;  
            curr->next = pichla;
            curr->prev = agla;
            pichla = curr;
            curr = agla;
        }
        
      
        return pichla;

    }
};
