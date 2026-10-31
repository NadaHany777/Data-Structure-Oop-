#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
};
class LinkedList{
public:
    Node *head;
    LinkedList(){
    head=NULL;
    }

bool isEmpty(){
    return(head==NULL);
}
void insertFirst(int newValue){
    Node *newnode=new Node();
    newnode->data=newValue;
    if(isEmpty()){
        head=newnode;
        newnode->next=NULL;
    }
    else{
    newnode->next=head;
    head=newnode;
    }

}
void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" "  ;
        temp=temp->next;
    }
    cout<<"\n";
}
void count(){
    int counter=0;
    Node *temp=head;
    while(temp!=NULL){
        counter++;
        temp=temp->next;
    }
    cout<<"The Number of elements in linked list = "<<counter<<"\n";
}
void isFound(int key){
    Node *temp=head;
    bool found=0;
    while(temp!=NULL){
        if(temp->data==key){
            found=1;
        }
        temp=temp->next;
    }
    if(found){
        cout<<"True ,the number has been found in the list\n";
    }
    else{
         cout<<"False ,the number has not been found in the list\n";
    }
}
void append(int newValue){
    if(isEmpty()){
        insertFirst(newValue);
        return;
    }
    else{
        Node *newnode=new Node();
        newnode->data=newValue;
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;

    }
}
void insertbefore(int item,int newValue){
    if(isEmpty()){
        insertFirst(newValue);
        return;
    }

    if(head->data==item){
        insertFirst(newValue);
        return;
    }
    Node *temp=head;
    Node *newnode=new Node();
    newnode->data=newValue;
    while(temp!=NULL && temp->next->data!=item){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void deletion(int item){
    if(isEmpty()){
        cout<<"Sorry we can not delete this item because linked list is empty\n";
    }
    else{
        Node *delptr=head;
        Node *prev=NULL;
        while(delptr->data!=item){
            prev=delptr;
            delptr=delptr->next;
        }
        prev->next=delptr->next;
        delete delptr;
    }
}
};
int main()
{
    LinkedList list1;

    cout<< list1.isEmpty()<<"\n";
    list1.insertFirst(30);
    list1.append(40);
    list1.insertFirst(20);
    list1.insertFirst(10);
    list1.append(50);
    list1.display();
    list1.isFound(70);
    list1.isFound(30);
    list1.count();
    list1.insertbefore(40,37);
    list1.deletion(50);
    list1.display();

    return 0;
}
