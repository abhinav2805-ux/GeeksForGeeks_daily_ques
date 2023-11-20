


                                                                      //K Sum Paths

class Solution{
  public:
  
  
   void solve(Node* root,int targetSum,int &path, vector<int> &add)
    {
        if(root==NULL)
        return;

        add.push_back(root->data);


        long long sum = 0;

        for(int i = add.size()-1; i>=0; i--)
        {
            sum += add[i];

            if(sum==targetSum)
            {
                path++;
            }
        }
        
        solve(root->left,targetSum,path,add);
        solve(root->right,targetSum,path,add);
        add.pop_back();
    }
  
int sumK(Node *root,int targetSum)
    {
        int path = 0;
        vector<int> add;
        solve(root,targetSum,path,add);
        return path;
      
    }
};
