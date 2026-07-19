#include <iostream>
using namespace std;


struct node{  //user defined data-type for a Link List Node
    int data;// Stores the value of the node
    node *next; //node points to next node in List                                                                                                                                           || a pointer to the next node (next).

    node(int val){//constructor to initialize a node
    data=val; //assigning value in data {of structure variable}
    next=nullptr;//Next is NULL of this poiter variable(node); the node does not point to any other node
    }//...............block-1
};
//InsertAtHead
void insertAtHead(node *&head,int val){
node *newnode=new node(val);
newnode->next=head;
head=newnode;
}
void insertAtPosition(node *&head, int position,int val){//head is a reference to a node pointer{allowing the function to modify the original head pointer}

if(head==nullptr){// If the list is empty, insertion cannot be performed; Special case
  return; 
}
if(position==1){ //Insert at the beginning of the list; Special case
    insertAtHead(head,val);// function call
    return;
}
node *cur=head;//cur points to the first node; Cur start traversing the list from the head.node
int i=1;//bydefault 1 based index
while(i<position-1 and cur){// Searching the node just before position{like InsertBeforeKey}
cur=cur->next;// cur is updated to points to the next node{connection fullfilled without insert Tail in normal case} 
i++;
}
if(cur==nullptr)return;// Position out of bounds;Special case
//creat a node on the heap
 node /*must(*) to declare pointer */ *newnode/* assets are data & address{NULL}*/=new/*malloc*/ node(val);//constractor call....block-1
newnode->next=cur->next;// Make the newnode point to the next node;Link the last node to the new node.
cur->next=newnode;//Link the current node to the new node.
}

 void printLL(node *head){//pointing to head as parameter
 while(head){//loop will run until the head is nullptr
    cout<<head->data<<"->";//print LL
    head=head->next;//update head
 }
 cout<<"nullptr"<<endl;
 }

int main() 
{
    node *head=nullptr;//Initially the head is empty
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    printLL(head);//20->30->40->nullptr
    insertAtPosition(head,3,50);
    printLL(head);//20->30->50->40->nullptr
   
    return 0;
}