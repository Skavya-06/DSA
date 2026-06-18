#include <iostream>
using namespace std;
int main(){
    int x=1;
    int reverse=0;
    for (int i=1;i<5;i++){
        int num=x%10;
        reverse=reverse*10+num;
        x=x/10;     
    }
    cout<<reverse;
}