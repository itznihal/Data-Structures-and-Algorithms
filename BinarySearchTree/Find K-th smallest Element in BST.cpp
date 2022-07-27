/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

   int ksmallest(BinaryTreeNode<int>* root , int& i, int k){
        
        
        /*
        Base COndition
        Left traversal 
        root 
        Right
        */
        
        if(root == NULL)
            return -1;
        
       
       //Left
        int left = ksmallest(root->left , i , k);
        
        if(left != -1){
            return left;
        }
        
        //Root
       i++;
       if(i == k)
          {
              return root->data;
          }        
       
       //Roght
       
       return ksmallest(root->right , i , k);
        
    }
    

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
     int i = 0;
        
        int ans = ksmallest(root , i , k);
        return ans;
        
}

