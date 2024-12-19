#include <iostream>

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* Next;

    Node(int data) {
        this->data = data;
        this->Next = NULL;
    }
};

void InsertAtStart(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->Next = head;
    head = temp;
}
void InsertAtEnd(Node*& tail, int d) {
   Node* temp = new Node(d);
   tail->Next=temp;
   tail=tail->Next;
    }
    void InsertAtPosition(Node*& head, int position, int d) {
   Node* temp = head;
   int count=1;
   if(position==1){
       InsertAtStart(head, d);
   }
   else{
   while(count<position-1){
       temp=temp->Next;
       count++;
   }
   Node* newNode = new Node(d);
   newNode->Next=temp->Next;
   temp->Next=newNode;
   temp=temp->Next;
   }
   
    }
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->Next;
    }
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    InsertAtStart(head, 12);
    InsertAtStart(head, 15);
    InsertAtStart(head, 20);
    InsertAtEnd(tail,18);
    InsertAtEnd(tail,16);
    InsertAtPosition(head, 1, 14);
    printList(head);
    return 0;
}