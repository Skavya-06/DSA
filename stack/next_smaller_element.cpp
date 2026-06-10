// // INPUT= [ 1 3 2 5 3 4]
// // OUTPUT= [-1 2 -1 3 -1 -1]

// #include <iostream>
// using namespace std;
// int main(){
//     int array[6]={1,3,2,5,3,4};
//     int answer[6];
//     int count;
//     for (int i=0;i<6;i++){
//         count=0;
//         for (int j=i+1;j<6;j++){
//             if (array[i]>array[j]){
//                 answer[i]=array[j];
//                 count=1;
//                 break;
//             }

//         }
//         if(count==0){
//             answer[i]=-1;
//         }
//     }
//     for(int i=0;i<6;i++){
//         cout<<answer[i]<<" ";
//     }
// }


#include <iostream>


using namespace std;


int main() {

   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; i++) {
      cin >> v[i];
   }

   vector<int> ans(n, -1);

   stack<int> s;

   for (int i = n - 1; i >= 0; i--) {
      while (!s.empty() && s.top() > v[i])s.pop();
      if (!s.empty()) {
         ans[i] = s.top();
      }
      s.push(v[i]);
   }

   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }


   return 0;
}