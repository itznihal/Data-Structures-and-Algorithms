
// Similar as level order -> keep updating levels and sum 


void levelOrder(Node* root , int k){
    if(root == NULL){
        return;
    }
    queue<Node*> q;


    q.push(root);
    q.push(NULL);
    int level = 0;
    while (!q.empty())
    {
        Node* curr = q.front();
        q.pop();

        if(node != NULL){
// Sum calculations
if(level == k){
    sum = sum + node->data;
}



        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
        }
        else if(!q.empty()){
//increment level
level++;

            q.push(NULL);
        }
    }
}

levelOrder(root , k);
