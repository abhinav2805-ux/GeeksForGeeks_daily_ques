


                                  //Floor in BST


// User function Template for Java

class Solution {
    public static int floor(Node root, int x) {
        // Code here
        if(root==null) return -1;
        
        if(root.data==x) return root.data;
        
        else if(root.data>x) return floor(root.left,x);
        
        else return Math.max(root.data,floor(root.right,x));
        
        
       
        
    }
}
