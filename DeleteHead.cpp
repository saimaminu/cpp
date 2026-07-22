#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int val){
        data=val;
        next=nullptr;
    }
};
//Insert at the beginning of the linked list
void insertAtHead(node *&head,int val){
    node *nodeptr=new node(val);
    nodeptr->next=head;//store head's address
    head=nodeptr;//update head to the nodeptr
}

//Delete the first node{Normal Deletion}
void deleteHead(node *&head){
    if(!head){//Special Case: List is empty
        cout<<"Underflow"<<endl;
        return;}
    head=head->next;//Normal Deletion: Move head to the next node
}

//Display the linked list
void display(node *head){
    while(head){
        cout<<head->data<<"->";//print Linked List
        head=head->next;// move to head the next node
    }
    cout<<"nullptr"<<endl;
}
int main() 
{
    node *head=nullptr;
    deleteHead(head);//Special Case: delete from a empty list "Underflow"
    insertAtHead(head,66);
    display(head);//66->nullptr
    insertAtHead(head,65);
    insertAtHead(head,64);
    deleteHead(head);
    display(head);//65->66->nullptr
    return 0;
}