// To insert a node at the start/beginning/front of a Linked List, we need to:

// 1. Make the first node of Linked List linked to the new node
// 2. Remove the head from the original first node of Linked List
// 3. Make the new node as the Head of the Linked List.




void push(Node** head_ref, int new_data)
{
 
    // 1. allocate node
    Node* new_node = new Node();
 
    // 2. put in the data
    new_node->data = new_data;
 
    // 3. Make next of new node as head
    new_node->next = (*head_ref);
 
    // 4. Move the head to point to
    // the new node
    (*head_ref) = new_node;
}