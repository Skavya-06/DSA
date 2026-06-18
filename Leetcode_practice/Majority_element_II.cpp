// SORTING--->MAJORITY ELEMENT II
#include <iostream>
using namespace std;
void insertion(int a[],int n){
        for(int i=1;i<n;i++){
            int key=a[i];
            int j=i-1;
            while (j>=0 && a[j]>key){
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=key;
        }
 
    for (int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
    cout<<endl;


}
void majority(int a[],int n){
    int count=1;
    for(int i=0;i<n-1;i++){
        if (a[i]==a[i+1]){
            count=count+1;
        }
        else{
            if(count>n/3){
                cout<<a[i]<<" ";
                count=1;
            }
            else{
                count=1;
            }
        }
    }
    if (count > n / 3) {
        cout << a[n - 1] << " ";
    }
}
    int main(){
        int a[4]={3,1,2,1};
        insertion(a,4);
        majority(a,4);
    }
