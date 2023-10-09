#include<iostream>
using namespace std;

class Node{

    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
}; 


class DoublyLinkedList{

    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void display(){

        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<endl;
    }

    Node* insertAtStart(int val){
    Node* new_node = new Node(val);
    if(head==NULL){
        head = new_node;
        tail = new_node;
    }
    else{
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    return new_node;
}

};

int main() {

    DoublyLinkedList dll;
    
    dll.insertAtStart(1);
    dll.display();
    dll.insertAtStart(2);
    dll.display();
    dll.insertAtStart(3);
    dll.display();

    return 0;
}