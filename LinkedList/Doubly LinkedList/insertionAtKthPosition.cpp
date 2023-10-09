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

    void insertAtEnd(int val) {
    Node* new_node = new Node(val);
    if (tail == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

    void insertAtPosition(int val, int k){
        //assuming k is less than or equal to length of doubly linked list
        Node* temp = head;
        int count = 1;
        while(count<(k-1)){
            temp=temp->next;
            count++;
        }

        //temp will be pointing to the node at (k-1)th position
        Node* new_node = new Node(val);
        //next ptr
        new_node->next = temp->next;
        temp->next = new_node;

        //prev ptr
        new_node->prev = temp;
        new_node->next->prev = new_node;
    }

};

int main() {

    DoublyLinkedList dll;
    
    dll.insertAtEnd(1);
    dll.display();
    dll.insertAtEnd(2);
    dll.display();
    dll.insertAtEnd(3);
    dll.display();

    dll.insertAtPosition(4,3);
    dll.display();

    return 0;
}