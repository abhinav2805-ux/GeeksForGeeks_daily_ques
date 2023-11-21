


                                                                                                    //Determine if Two Trees are Identical
class Solution
{
    public:
    //Function to check if two trees are identical.

    bool isIdentical(Node *root1, Node *root2)
    {
        if (!root1 && !root2) {
            return true;
        }
        
       
        if (!root1 || !root2) {
            return false;
        }

       
        return (root1->data == root2->data) &&
               isIdentical(root1->left, root2->left) &&
               isIdentical(root1->right, root2->right);
        
    }
};
