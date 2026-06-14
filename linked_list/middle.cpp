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

    Node* temp=head;
    int count=0;
    while(temp!= NULL){
        count=count+1;
        temp=temp-> next;
    }
    int middle=(count/2);
    if(count%2==0){
        cout<<"No middle";
    }
    else{
        temp=head;
        count=0;
        while(temp!= NULL){
            count=count+1;
        if(count==middle){
            cout<<temp->next->data;
            break;
        }
        temp=temp-> next;
    }
    }


}