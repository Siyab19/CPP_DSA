#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;

    Node(int data){
        this->data=data;
        this->Next=NULL;
    }
};
    int main(){
        Node* Node1=new Node(12);
        cout<<Node1->data<<endl;
        return 0;
    }