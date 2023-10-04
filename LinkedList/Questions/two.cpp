//delete all duplicates such that each element appears only once. Return the sorted linked list too.

#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head=NULL;
    }

    void insertAtTail(int value){

        Node* new_node = new Node(value);
        if(head==NULL){  //linkedlist is empty
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = new_node;
    
    }

    void display(){

        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};

void deleteDuplicateNodes(Node* &head){

    Node* curr_node = head;
    while(curr_node){
        while(curr_node->val==curr_node->next->val){
            //delete current->next
            Node* temp = curr_node->next->next;
            free(temp);
            //this loop ends when current node and next node values are different
            curr_node = curr_node->next;
        }
    }
}

int main() {

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    deleteDuplicateNodes(ll.head);
    ll.display();




    return 0;
}