#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    int middle=(start+end)/2;
    while(start<end){
        if(arr[middle]<arr[middle+1]){
            start=middle+1;
        }
        else{
            end=middle-1;
        }
        middle=(start+end)/2;
    }
    cout<<middle;
}