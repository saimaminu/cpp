#include <iostream>
using namespace std;


struct node{  //user defined data-type for a Link List Node
    int data;// Stores the value of the node
    node *next; //node points to next node in List                                                                                                                                           || a pointer to the next node (next).

    node(int val){//constructor to initialize a node
    data=val; //assigning value in data {of structure variable}
    next=NULL;//Next is NULL of this poiter variable(node)
    }//...............block-1
};
//InsertAtHead
void insertAtHead(node *&head,int val){
node *newnode=new node(val);
newnode->next=head;
head=newnode;
}
void insertAfterKey(node *&head, int key,int val){//head is a reference to a node pointer{allowing the function to modify the original head pointer}

if(head==NULL){//if the head is epmty
  return; //Special case
}
node *cur=head;//cur points to the first node; Cur start traversing the list from the head.;
while(cur and cur->data!=key){// Searching for key
cur=cur->next;// cur is updated to points to the next node
}
if(cur==NULL)return;//key not found;Special case
//creat a node on the heap
 node /*must(*) to declare pointer */ *newnode/* assets are data & address{NULL}*/=new/*malloc*/ node(val);//constractor call....block-1
newnode->next=cur->next;//newnode becomes cur->next{when cur->next==NULL,then insert the Tail};Link the last node to the new node.
cur->next=newnode;
}

 void printLL(node *head){//pointing to head as parameter
 while(head){//loop will run until the head is NULL
    cout<<head->data<<"->";//print LL
    head=head->next;//update head
 }
 cout<<"NULL"<<endl;
 }

int main() 
{
    node *head=NULL;//Initially the head is empty

    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    printLL(head);//20->30->40->NULL
    insertAfterKey(head,20,50);
    printLL(head);//20->50->30->40->NULL
    
    return 0;
}
