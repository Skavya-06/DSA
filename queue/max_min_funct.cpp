#include <iostream>
using namespace std;
// int maxi(queue){

// }

// Queue STL

int main() {

    queue<int> q;  // create a queue

    q.push(10);
    q.push(14);
    q.push(18);
    q.push(0); // enqueue operation

    q.pop(); // dequeue operation

    cout << "Size of queue : " << q.size() << endl;
    cout << "Front of queue : " << q.front() << endl;
    cout << "Rear of queue : " << q.back() << endl; // all O(1)

    // print all queue elements


    return 0;
}