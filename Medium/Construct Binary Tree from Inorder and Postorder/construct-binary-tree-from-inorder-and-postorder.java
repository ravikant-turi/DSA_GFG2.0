//{ Driver Code Starts
import java.util.*;

class Node {
    int data;
    Node left;
    Node right;

    Node(int value) {
        data = value;
        left = null;
        right = null;
    }
}

class InorderPostorderToTree {
    public void preOrder(Node root) {
        if (root == null) return;

        System.out.print(root.data + " ");
        preOrder(root.left);

        preOrder(root.right);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        InorderPostorderToTree ip = new InorderPostorderToTree();
        int T = sc.nextInt();
        while (T > 0) {
            int n = sc.nextInt();
            int inorder[] = new int[n];
            int postorder[] = new int[n];
            for (int i = 0; i < n; i++) inorder[i] = sc.nextInt();
            for (int i = 0; i < n; i++) postorder[i] = sc.nextInt();
            GfG g = new GfG();
            Node root = g.buildTree(inorder, postorder, n);
            ip.preOrder(root);
            System.out.println();

            T--;
        }
    }
}

// } Driver Code Ends


/* Tree node structure
class Node
{
    int data;
    Node left;
    Node right;

        Node(int value)
    {
        data = value;
        left = null;
        right = null;
    }
}*/


class GfG
{
    //Function to return a tree created from postorder and inoreder traversals.
    Node constructTree(Map<Integer,Integer> mp,int in[],int inStart , 
    int inEnd , int post[] , int postStart , int postEnd){
        
        if(inStart>inEnd || postStart>postEnd)return null;
        
        int idx = mp.get(post[postEnd]);
        int numLeft = idx-inStart;
        Node node = new Node(post[postEnd]);
        
        node.left = constructTree(mp,in,inStart,idx-1,post,postStart,postStart+numLeft-1);
        node.right = constructTree(mp,in,idx+1,inEnd,post,postStart+numLeft,postEnd-1);
        
        return node;
    }
    Node buildTree(int in[], int post[], int n) {
        // Your code here
        Map<Integer,Integer> mp = new HashMap<>();
        for(int i=0;i<n ;i++){
            mp.put(in[i],i);
        }
        return constructTree(mp,in,0,n-1,post,0,n-1);
    }
}
