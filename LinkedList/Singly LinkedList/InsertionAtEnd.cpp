//Insertion at the end of a Linked List
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

//to make new node and implies to the head node
void insertAtHead(Node* &head, int val){

    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){

    Node* new_node = new Node(val);

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //temp has reached last node
    temp->next = new_node;

}

//print the new node
void display(Node* head){

    Node* temp=head;
    while(temp!=NULL){ //when the while will true means the nodes of the LL is Traversed
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {

    Node* head = NULL; //new node head whose initially value is NULL
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    insertAtHead(head, 3);
    display(head);
    insertAtTail(head, 6);
    display(head);

    return 0;
}

//Insertion at the beginning of the LL is of Time Complexity of "O(n)". it will bw O(1) if tail pointer is passed
