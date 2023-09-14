To insert a node after a given node in a Linked List, we need to:

Check if the given node exists or not. 
If it do not exists, 
terminate the process.
If the given node exists,
Make the element to be inserted as a new node
Change the next pointer of given node to the new node
Now shift the original next pointer of given node to the next pointer of new node



// Given a node prev_node, insert a
// new node after the given
// prev_node
void insertAfter(Node* prev_node, int new_data)
{
    // 1. Check if the given prev_node is NULL
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
 
    // 2. Allocate new node
    Node* new_node = new Node();
 
    // 3. Put in the data
    new_node->data = new_data;
 
    // 4. Make next of new node as
    // next of prev_node
    new_node->next = prev_node->next;
 
    // 5. move the next of prev_node
    // as new_node
    prev_node->next = new_node;
}