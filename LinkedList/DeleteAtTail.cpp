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

void insertAtPosition(Node* &head, int val, int pos){

    if(pos==0){
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }

    //temp is pointing to node at pos-1
    new_node->next  = temp->next;
    temp->next = new_node;
}

void updateAtPosition(Node* &head, int k, int val){

    Node* temp = head;
    int curr_pos = 0;

    while(curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }

    //temp whll be pointing to the kth node
    temp->val = val;
}

void deleteAtHead(Node* &head){

    Node* temp = head; //node to be deleted
    head = head->next;
    free(temp);
}

void deleteAtTail(Node* &head){

    Node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }

    //now second_last points to second kast node
    Node* temp = second_last->next; //node to be deleted
    second_last->next=NULL;
    free(temp);
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
    insertAtPosition(head, 8,1);
    display(head);
    updateAtPosition(head, 2,5);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);

    return 0;
}

//Insertion at the beginning of the LL is of Time Complexity of "O(n)"
