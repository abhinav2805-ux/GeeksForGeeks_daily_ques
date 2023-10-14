





                                                                //Find Common Nodes in two BSTs


class Solution
{
    static boolean search(int val,Node root){
        while(root!=null){
            if(root.data==val) return true;
            else if(root.data>val) root=root.left;
            else root=root.right;
        }
        return false;
        
    }
    //Function to find the nodes that are common in both BST.
	public static ArrayList<Integer> findCommon(Node root1,Node root2)
    {
        //code here
        ArrayList<Integer> res=new ArrayList<Integer>();
        Queue<Node> q=new LinkedList<Node>();
        q.add(root1);
        while(!(q.isEmpty())){
            Node temp=q.remove();
            boolean a=search(temp.data,root2);
            if(a==true) res.add(temp.data);
            if(temp.left!=null) q.add(temp.left);
            if(temp.right!=null) q.add(temp.right);
        }
        Collections.sort(res);
        return res;
    }
}
