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
int main(){
    // create linked list manually
    Node* head;
    Node* first=    new Node(10);
    Node* second=   new Node(20);
    Node* third=    new Node(30);
    Node* fourth=   new Node(40);
    Node* fifth=    new Node(50);
    head=first;
    head -> next= second;
    head -> next ->next =third;
    head -> next ->next -> next =fourth;
    head -> next ->next -> next-> next=fifth;
    
    int value;
    cout<<"Enter a value";
    cin>>value;
    string flag= "false";
    int count=1;


   Node* temp=head;
    while(temp!= NULL){
        if(temp->data==(value)){
            flag="true";
            cout<<flag<<" at position "<<count;
            break;
        }
        temp=temp-> next;
        count=count+1;
    }    
    if(flag=="false"){
        cout<<"Not found";
    }

}