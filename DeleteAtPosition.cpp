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

//insert at head
void insertAtHead(node *&head,int val){
    node *newnode=new node(val);
    newnode->next=head;
    head=newnode;
}
void deleteAtPos(node *&head,int position){//head is a reference to a node pointer{allowing the function to modify the original head pointer}
if(head==NULL){//for empty LL
    cout<<"underflow->";//Special case
    return;
}
if(position==1){//Delete Head
    head=head->next;//Special case;head will update without storing
    return;
}
node *cur=head;//cur points to the first node; Cur start traversing the list from the head.;
for(int i=1; i<position-1 and cur;i++){// Continue until cur points position's previous node and not null.
cur=cur->next;// cur is updated to points to the next node
}
if(!cur||!cur->next){
    cout<<"Position Not Found"<<endl;
    return;}//position out of bounds
cur->next=cur->next->next;//Bypass the node at the given position
}

 void printLL(node *head){//pointing to head as parameter
 while(head){//loop will run until the head is NULL
    cout<<head->data<<"->";//print LL
    head=head->next;//Move to the next node
 }
 cout<<"nullptr"<<endl;
 }

int main() 
{
    node *head=nullptr;//Initially the head is empty
    deleteAtPos(head,1);
    printLL(head);//underflow nullptr...1
    insertAtHead(head,51);
    deleteAtPos(head,1);
    printLL(head);//nullptr....2
    insertAtHead(head,52);
    insertAtHead(head,53);
    printLL(head);//53->52->nullptr
    deleteAtPos(head,3);
    //printLL(head);//Position Not Found; if print this "53->52->nullptr" will be print
    deleteAtPos(head,4);
    //printLL(head);//Position Not Found; if print this "53->52->nullptr" will be print
    deleteAtPos(head,1);
    printLL(head);//52->nullptr
    deleteAtPos(head,1);
    printLL(head);//underflow NULL
    return 0;
}