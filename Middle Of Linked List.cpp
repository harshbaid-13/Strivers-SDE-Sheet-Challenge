/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    Node *one=head, *two=head;
    while(two->next!=NULL and two->next->next!=NULL)
    {
        one = one->next;
        two = two->next->next;
    }
    if(two->next!=NULL)
    return one->next;
    return one;
    
}

