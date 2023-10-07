



                                         //Pairwise swap elements of a linked list



class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
            if(head == NULL || head->next == NULL){
            return head;
        }
        Node* curr = head;
        Node* ptr = head->next;
        Node* prev = curr;
        Node* temp = ptr;
        while(curr != NULL && ptr != NULL){
            curr->next = ptr->next;
            ptr->next = curr;
            if(curr != head){
                prev->next = ptr;
                prev = prev->next->next;
            }
            curr = ptr;
            ptr = curr->next;
            if(ptr->next){
                ptr = ptr->next->next;
            }
            if(curr->next){
                curr = curr->next->next;
            }
        }
        head = temp;
        return head;
    }
};
