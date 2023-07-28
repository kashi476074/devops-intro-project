#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *adr;
};
void mid(Node **head,int data,int after){
    Node *n1=new Node();
    //n1->head=head;
    n1->data=data;
    Node *mid=*head;
    while (mid->data!=after){
        mid=mid->head;
    }
    n1->head=mid->head;
    mid->head=n1;
    
}

void creat(Node **head,int data){
    Node *newnode=new Node();
    newnode->adr=*head;
    newnode->data=data;
    *head=newnode;
    cout<<"New Head == "<<newnode<<"  with Data == "<<newnode->data<<endl;
}

void append(Node **head,int data){
    cout<<endl<<"Insetring Data at End of Node"<<endl;
   Node *newnode=new Node();
   newnode->adr=NULL;
   newnode->data=data;
   Node *end=*head;
   while(end->adr!=NULL){
       end=end->adr;
   }
   end->adr=newnode;
   cout<<"End Node is == "<<newnode<<"  with Data == "<<data<<endl;
   
}
void showall(Node **head){
    cout<<endl<<"Showing All Nodes"<<endl;
    Node *next=*head;
    do{
        //
        cout<<next<<"  ==  "<<next->data<<endl;
        next=next->adr;
    }while (next!=NULL);
}

/*void between(Node **head,int data,int after){
     Node newnode=new Node();
     newnode->data=data;
     Node *end=
}*/

int main()
{
    Node *head=NULL;
    cout<<"Head == "<<head<<endl;
    creat(&head,10);
    cout<<"Head == "<<head<<endl;
    creat(&head,8);
    cout<<"Head == "<<head<<endl;
    creat(&head,7);
    cout<<"Head == "<<head<<endl;
    showall(&head);
    cout<<"Head == "<<head<<endl;
    
    append(&head,5);
    cout<<"Head == "<<head<<endl;
    showall(&head);
    return 0;
}
