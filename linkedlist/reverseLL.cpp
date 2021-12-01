#include<bits/stdc++.h>
using namespace std;
class node{
 public:
 int data;
 node *next;
 node(int val){
     data=val;
     next=NULL;
 }

};
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL";

}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;

    }
    return prevptr;
}
node* InsertAtTail(node* &head,int val){
 node* n=new node(val);
 if(head==NULL){
     head=n;
     return head;
 }  
 node* temp=head;
 while(temp->next!=NULL){
     temp=temp->next;
 }
 temp->next=n;
 return head;
}
 int main(){
     node* head=NULL;
     InsertAtTail(head,1);
      InsertAtTail(head,2);
       InsertAtTail(head,3);
        InsertAtTail(head,4);
        print(head);
        cout<<endl;
        node* newhead=reverse(head);
        print(newhead);
     return 0;
 }