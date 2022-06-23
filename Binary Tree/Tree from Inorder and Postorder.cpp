
class Solution {
public:
    
    
    int search(vector<int>& inorder, int start , int end , int curr){

for(int i= start ; i<=end ; i++){
    if(inorder[i] == curr){
        return i;
    }
}
return -1;

}
    
    TreeNode* builtBinaryTree(vector<int>& inorder, vector<int>& postorder , int start , int end) {
        
        //Steps
        //1) Pick last element - decrease pointer 
        //2) Create a Node 
        //3)Find position of that value in inorder - search()
        //4)built right subtree -> after that left subtree
        //5)Base Condition
        
        static int idx = postorder.size()-1;
        if(start > end){
            return NULL;
        }
        //pick last element
        int curr = postorder[idx];
        idx--;
        
        //Create new node
         TreeNode* node = new TreeNode(curr);
        if(start == end){
            return node;
        }
        
        //Find that position in inorder arr 
        int pos = search(inorder , start , end , curr);
        
        //built right subtree -> after that left subtree
        node->right = builtBinaryTree(inorder , postorder , pos+1 , end);
          node->left = builtBinaryTree(inorder , postorder , 0 , pos-1);
        
           return node;
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        return builtBinaryTree(inorder, postorder,0, inorder.size()-1 );
    }
};