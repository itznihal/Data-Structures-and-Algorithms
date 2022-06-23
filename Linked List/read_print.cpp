#include<bits/stdc++.h>
using namespace std;


class node{

int data;
node* next;

node(int val){
    data = val;
    next=NULL;
}
};


void insertAtTail(node* &head , int val){
node* n = new node(val);

if(head == NULL)
head=n;

node* temp = head;

while(temp->next!=NULL){
temp = temp->next;
}

temp->next = n;


}


void display(node* head){

if(head == NULL){

    cout<< "Linked list is empty" << endl;
}

node* temp = head;
while(temp != NULL){
    cout << temp->data;
    temp = temp->next;  
    // Linear search
}

cout << "NULL" <<endl;
}


void insertAtHead(node* &head , int val){
node* n = new node(val);
if(head == NULL){
    head=n;
}
n->next = head;
head=n;
}




int main()
{

node* head = NULL;
insertAtTail(head , 3);
insertAtTail(head , 4);
insertAtTail(head , 5);
display(head);

 return 0;
}