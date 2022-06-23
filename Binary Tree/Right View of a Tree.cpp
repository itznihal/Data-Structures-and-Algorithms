vector<int> leftView(Node *root)
{
   // Your code here
//    same as left view 
// left ->  store into ans after that traverse all level
// diff -> traverse level after that store

     
        vector<int> ans;
      if(!root) return ans;
      
      queue<Node*> q;
      q.push(root);
      
      while(!q.empty()){
          
          int sz = q.size();
      
          Node* t;

          while(sz--){
          t = q.front();
          q.pop();
          if(t->left) q.push(t->left);
          if(t->right) q.push(t->right);
          }
          ans.push_back(t->data);
          
      }
      
      
      return ans;
    
     
   
}     


// CAN ALSO DONE BY RECURSION METHOD

 vector<int> leftview(Node* root)
    {
      //Your code here
     vector<int> ans;

    if(!root) return 0;

ans.push_back(root_data);
    leftview(root->right);    
      
      return ans;
      
    }
};