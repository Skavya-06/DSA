#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data =x;
        next=NULL;
    }

};
class Queue{
    public:
    Node* front;
    Node* rear;
    int sz;
    Queue(){
        front=NULL;
        rear=NULL;
        sz=0;

    }
    void push(int value,Node*& head){
        Node* add=      new Node(value);
        add->next=head;
        head= add;
    }

};
int main(){
    Queue q;

    q.push(10);
    q.push(14);
    q.push(18);
    q.push(0); // enqueue operation

    // q.pop(); // dequeue operation

    // cout << "Size of queue : " << q.size() << endl;
    // cout << "Front of queue : " << q.front() << endl;
    // cout << "Rear of queue : " << q.back() << endl; // all O(1)

    // print all queue elements
    while (q.sz() > 0) {
        cout << q.push() << " ";
        // q.pop();
    }

    return 0;

}