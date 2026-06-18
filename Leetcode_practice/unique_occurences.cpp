// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.




#include <iostream>
#include <algorithm>
using namespace std;
bool unique(int array_size,int arr[]){
    sort(arr,arr+array_size);
    int empty[array_size];
    int count=1;
    int k=0;
    for(int i=0;i<array_size-1;i++){
        if(arr[i]==arr[i+1]){
            count=count+1;
        }
        else{
            empty[k++]=count;
            count=1;
        }
    }
    empty[k++]=count;
    sort(empty,empty+k);
    sort(empty, empty + k);

    for(int i = 0; i < k; i++) {
        cout << empty[i] << " ";
    }
    cout << endl;

    for(int i=0;i<k-1;i++){
        if(empty[i]==empty[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int array_size;
    cin>>array_size;
    int arr[array_size];
    for(int i=0;i<array_size;i++){
        cin>>arr[i];
    }
    bool ans=unique( array_size, arr);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}




//First and Last Position of an Element In Sorted Array

// #include <iostream>
// using namespace std;
// int firstOcc(int arr[] , int n , int key){

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     int ans =-1;
//     while(s<=e){
//         if(arr[mid]== key){
//             ans = mid;
//             e = mid-1;
//         }
//         else if(arr[mid]<key){
//             s = mid +1;
//         }else{
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//     }
//     // mid = s + (e-s)/2;
//     return ans;
// }
// int main(){
//     int even[5]={1,2,3,3,5};
//     cout<<"first occurrence of 3 is at index = "<< firstOcc(even,5,3) << endl;
// }