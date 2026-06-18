#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

int main() {

    Node* first  = new Node(10);
    Node* second = new Node(20);
    Node* third  = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth  = new Node(50);

    Node* head = first;

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;

    int x;
    cin >> x;
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        if (count == x) {
            if (temp->next != NULL) {
                if (temp->next->next != NULL) {
                    temp->next->next->prev = temp;
                    temp->next = temp->next->next;
                }
                else {
                    temp->next = NULL;
                }
            }
            break;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}