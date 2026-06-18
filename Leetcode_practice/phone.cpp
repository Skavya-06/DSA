#include <iostream>
using namespace std;
int main(){
    string mp[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    string digits;
    cin>>digits;

    string a = mp[digits[0]-'0'];
    string b = mp[digits[1]-'0'];

    for(char x : a){
        for(char y : b){
            cout << x << y << " ";
        }
    }

}