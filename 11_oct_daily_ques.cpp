








                                                                                          //Check for Balanced Tree








//User function Template for Java


/* A binary tree node class
class Node
{
	int data;
	Node left,right;
	
	Node(int d)
	{
		data = d;
		left = right = null;		
	
//User function Template for Java


/* A binary tree node class
class Node
{
	int data;
	Node left,right;
	
	Node(int d)
	{
		data = d;
		left = right = null;		
	}
} */

class Tree
{
   int height(Node node){
       
       if(node==null) return 0;
       int lh=height(node.left);
       int rh=height(node.right);
       return Math.max(lh,rh)+1;
   }
    
    //Function to check whether a binary tree is balanced or not.
    boolean isBalanced(Node root){
        Queue<Node> q=new LinkedList<Node>();
        q.add(root);
        while(!(q.isEmpty())){
            
        Node temp=q.remove();
 int l=height(temp.left);
 int r=height(temp.right);
   if(temp.left!=null) q.add(temp.left);
   if(temp.right!=null) q.add(temp.right);
        int a=Math.abs(l-r);
        if(a>1) return false;
        }
        return true;
    
    
    
    
	// Your code here
	
    }
}
