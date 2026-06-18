#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size";
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
    int count=0;
    for(int k=n;k>=2;k--){
        int i=0;
        int j=k-1;
        while(i<j){
            if(a[i]+a[j]>a[k]){
                count=count+(j-i);
            }
            else{
                i++;
            }
        }
    }
    cout<<count;
}