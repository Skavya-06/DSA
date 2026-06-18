#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int j=0;
    while(j<n){
        if(a[j]==a[j+1]){
            cout<<a[j]<<" ";
            j=j+2;
        }
        else{
            j=j+1;
        }
    }
}