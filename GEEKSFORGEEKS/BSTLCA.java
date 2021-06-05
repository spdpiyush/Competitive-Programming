

/**
 * @author : Piyush Kumar
 * Problem Link : https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1
 * 
*/
class Node {
	int data;
	Node left, right;
	public Node(int data) {
		this.data = data;
		this.left = this.right = null;
	}
}
class BSTLCA
{   
    //Function to find the lowest common ancestor in a BST. 
	Node LCA(Node root, int n1, int n2)
	{
        // code here.    
        if (root == null) {
            return null;
        }
        if ((root.data < n1) && (root.data < n2) && (root.right != null)) {
            return LCA(root.right, n1 , n2);
        }
        if ((root.data > n1) && (root.data > n2) && (root.left != null)) {
            return LCA(root.left, n1 , n2);
        }
        return root;
    }
    
}
