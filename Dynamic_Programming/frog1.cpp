#include <iostream>
using namespace std;
int mini(int n, int height[]){
    if (n==0){
        return 0;
    }
    if (n==1){
        return abs(height[1] - height[0]);
    }
    int ans = min(
        mini(n - 1, height) + abs(height[n] - height[n - 1]),
        mini(n - 2, height) + abs(height[n] - height[n - 2])
    );
    return ans;
}
int main(){
    int n;
    cin>>n;
    int height[n];
    for (int i=0;i<n;i++){
        cin>>height[i];

    }
    cout << mini(n - 1, height)<<endl;
}




// dp[i]=min(dp[i-1]+(arr[i]-arr[i-1]),dp[i-2]+(arr[i]-arr[i-2]))