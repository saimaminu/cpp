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

void deleteTail(node *&head){//head is a reference to a node pointer{allowing the function to modify the original head pointer}
if(head==NULL){//if the head is epmty
    cout<<"underflow";//Special case
    return;
}
if(head->next==NULL){//if only head exists
    head=NULL;//Special case
    return;
}
node *cur=head;//cur points to the first node; Cur start traversing the list from the head.;
while(cur->next->next){// Continue until cur points to the last node.
cur=cur->next;// cur is updated to points to the next node
}
cur->next=NULL;// cur->next points to NULL
}

 void printLL(node *head){//pointing to head as parameter
 while(head){//loop will run until the head is NULL
    cout<<head->data<<"->";//print LL
    head=head->next;//update head
 }
 cout<<" NULL"<<endl;
 }

int main() 
{
    node *head=NULL;//Initially the head is empty
    deleteTail(head);
    printLL(head);//underflow NULL
    
    return 0;
}