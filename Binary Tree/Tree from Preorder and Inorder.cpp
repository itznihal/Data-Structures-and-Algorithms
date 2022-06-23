#include<bits/stdc++.h>
using namespace std;

struct Node{

int data;
struct Node* left;
struct Node* right;

Node(int val){
    data = val;
    left= NULL;
    right = NULL;

}
};


int search(int inorderarr[] , int start , int end , int curr){

for(int i= start ; i<=end ; i++){
    if(inorderarr[i] == curr){
        return i;
    }
}
return -1;

}

Node* builttree(int preorderarr[] , int inorderarr[] , int start , int end){


static int idx = 0;

if(start > end){
    return NULL;
}

int curr = preorderarr[idx];
idx++;
Node* node = new Node(curr);
if(start == end ){
    return node;
}


int pos = search(inorderarr ,start , end , curr );
node ->left=builttree(preorderarr , inorderarr , start , pos-1);
node->right = builttree(preorderarr , inorderarr , pos+1 , end);

return node;

}




//traversals

void preorder(struct Node* root){
if(root == NULL){return;}
//root -> left -> right
cout << root->data << " " ;
  preorder(root->left);
  preorder(root->right);
  
}

void inorder(struct Node* root){
if(root == NULL){
  return;
}
//left -> root -> right
inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}


void postorder(struct Node* root){
if(root == NULL){
  return;
}
//left -> right -> root
postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}


int main(){

// struct Node* root = new Node(1);
// root->left = new Node(2);
// root->right= new Node(3);

// root->left->left = new Node(4);
// root->left->right = new Node(5);
// root->right->left = new Node(6);
// root->right->right = new Node(7);

int preorderarr[] = { 1 , 2 , 4 , 3 , 5};
int inorderarr[] = { 4,2,1,5,3};
//   preorder(root);
//   cout << endl;
Node* root =  builttree(preorderarr , inorderarr , 0 , 4);


  inorder(root);
  cout << endl;
//   postorder(root);
//   cout << endl;

    return 0;
}