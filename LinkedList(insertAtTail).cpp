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

void insertAtTail(node *&head,int val){//head is a reference to a node pointer{allowing the function to modify the original head pointer}
//creat a node on the heap
 node /*must(*) to declare pointer */ *newnode/* assets are data & address{NULL}*/=new/*malloc*/ node(val);//constractor call....block-1

if(head==NULL){//if the head is epmty,make new node the head
    head=newnode;//Special case
    return;
}
node *cur=head;//cur points to the first node; Cur start traversing the list from the head.;
while(cur->next){// Continue until cur points to the last node.
cur=cur->next;// cur is updated to points to the next node{connection fullfilled without insert Tail in normal case} "50->NULL endl 50->NULL"
}
cur->next=newnode;//newnode becomes cur->next{when cur->next==NULL,then insert the Tail};Link the last node to the new node."50->NULL endl 50->40->30->20->10->NULL
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
    insertAtTail(head,50);
    printLL(head);//50->NULL
    insertAtTail(head,40);
    insertAtTail(head,30);
    insertAtTail(head,20);
    insertAtTail(head,10);
    printLL(head);//50->40->30->20->10->NULL
    return 0;
}