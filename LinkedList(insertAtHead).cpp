#include <iostream>
using namespace std;


struct node{  //define struct{user define data-type}
    int data;// declaring an integer
    node *next; //node points to next's address                                                                                                                                             || a pointer to the next node (next).

    node(int val){//initializing constructor 
    data=val; //assigning value in data {of structure variable}
    next=NULL;//Next is NULL of this poiter variable(node)
    }//...............block-1
};

void insertAtHead(node *&head,int val){//head is a reference to a node pointer{allowing the function to modify the original head pointer}and call by value
//creat a node on the heap
 node /*must(*) to declare pointer */ *newnode/* assets are data & address{NULL}*/=new/*malloc*/ node(val);//constractor call....block-1
newnode->next=head;//storing head to assign in newnode's next
head=newnode;// newnode becomes head{'Now the connection fullfilled'}
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
    node *head=NULL;//creating empty LL
    insertAtHead(head,50);
    printLL(head);//50->NULL
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    printLL(head);//10->20->30->40->50->NULL
    return 0;
}