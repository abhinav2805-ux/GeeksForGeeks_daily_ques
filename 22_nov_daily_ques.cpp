


                                                                                    //Symmetric Tree


class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    
     bool dfs(Node* l, Node* r){
        if(l==NULL && r==NULL) return 1;
        if(l!=NULL && r==NULL) return 0;
        if(l==NULL && r!=NULL) return 0;

        bool left = dfs(l->left,r->right);
        bool right = dfs(l->right,r->left);
        bool value = (l->data == r->data);

        return (left && right && value);
    }

      
    
    
    
    bool isSymmetric(struct Node* root)
    {
        if(root==NULL) return true;
	  
	    return dfs(root->left,root->right);
    
    }
};
