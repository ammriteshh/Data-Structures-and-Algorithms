#include<iostream>
using namespace std;

bool checkEqualLiinkedList(Node* head1, Node* head2){

    Node* ptr1 = head1;
    Node* ptr2 = hrad2;

    while(ptr!=NULL && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }

        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
}