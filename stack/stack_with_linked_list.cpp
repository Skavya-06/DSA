#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int x){
        Node* temp= new Node(x);
        temp->next=top;
        top=temp;
    }
    void pop(){
        if (top==NULL)
        return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    int top_element(){
        return top->data;
    }
    bool empty(){
        return top == NULL;
    }
    
};

int main(){
    Stack s;
    s.push(100);
    s.push(20);
    s.push(34);
    s.push(56);
    s.push(30);
    s.push(45);
    s.push(67);


    cout << "Top element: " << s.top_element() << endl;

    s.pop();

    cout << s.top_element() << endl;

    if(s.empty())
        cout<<"EMPTY";
    else
        cout<<"NOT EMPTY";

    return 0;


}