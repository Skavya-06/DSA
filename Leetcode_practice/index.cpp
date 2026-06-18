#include <iostream>
using namespace std;
int main(){
    int target;
    cout<<"Enter target";
    cin>>target;
    int n;
    cout<<"enter size";
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            if (first == -1){
                first = i;
                last = i;
            }
        }
    }
    cout<<first<<endl;
    cout<<last;

}

