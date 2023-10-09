



                                        //Height of Binary Tree







class Solution{
    public:
    //Function to find the height of a binary tree.
    int levels(Node* root){
    if(root==NULL) return 0;
    return 1 +  max(levels(root->left),levels(root->right));    

}
    int height(struct Node* node){
        // code here 
        return levels(node);
    }
};
