#include <stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
#include<limits.h>
#include<set>
using namespace std;
//--------SPIRAL MATRIX PRINTING -----------
// void print(vector<vector<int>>m){
//    int row = m.size();
//    int col = m[0].size();
//    vector<int> ans;
//    int rs = 0,ce=col-1,cs=0,re=row-1;
//    int total_elements = row*col;
//    int count = 0;
//    while(count<total_elements){
//       for(int i = cs;i<=ce && count<total_elements;i++){
//          ans.push_back(m[rs][i]);
//          count++;
//       }
//       rs++;
//       for(int i = rs;i<=re && count<total_elements;i++){
//          ans.push_back(m[i][ce]);
//          count++;
//       }
//       ce--;
//       for(int i = ce;i>=cs && count<total_elements;i--){
//          ans.push_back(m[re][i]);
//          count++;
//       }
//       re--;
//       for(int i = re;i>=rs && count<total_elements;i--){
//          ans.push_back(m[i][cs]);
//          count++;
//       }
//       cs++;
//    }
//    for(auto i: ans){
//       cout<<i<<" ";
//    }
// }
//  int main(){
//    vector<vector<int>>mat ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//    print(mat);
//     }
//----WAVE PRINT OF A MATRIX COLOUMN WISE  and row wise ---------
// void print( vector<vector<int>>a){
//   int row = a.size();
//    int col = a[0].size();
//    for(int i = 0;i<row;i++){
//       if((i&1)==0){
//          for(int j = 0;j<col;j++){
//             cout<<a[i][j]<<" ";
//          }
//       } else {
//          for(int j = col-1;j>=0;j--){
//             cout<<a[i][j]<<" ";
//          }
//       }
//    }

// }
// int main(){
//    vector<vector<int>>a = {{1,2,3}, //2 D vector
//                   {7,8,9},
//                   {4,5,6}};
//    print(a);
//    }
//-------COMMON ELEMENT IN 3 SORTED ARRAY-----------
// vector<int> find(vector<int> a,vector<int> b,vector<int> c){
//    vector<int> res;
//    set<int>st;
//    int i=0,j=0,k=0;
//    while(i<a.size()&&j<b.size()&&k<c.size()){
//     if(a[i]==b[j]&&b[j]==c[k]){
//       st.insert(a[i]);
//       //res.push_back(a[i]);
//       i++,j++,k++;
//     }else if(a[i]<b[j]){
//       i++;
//     }else if(b[j]<c[k]){
//       j++;
//     }
//     else{
//       k++;
//     }  
//    }
//    for(auto i : st){
//       res.push_back(i);
//    }
//    return res;
// }
// int main(){
//    //vector<int> a = {1, 5, 10,20,40,80};
//    //vector<int> b = {3,9,15,20,25,40,89};
//    //vector<int> c = {10,15,20,40,49,80};
//    vector<int> a = {20,20,20};
//    vector<int> b = {20,20,20};
//    vector<int> c = {20,20,20};
//    vector<int> ans = find(a,b,c);
//    //-----new mehtod of traversing-------
//    // for(int i : ans){
//    //    cout<<i<<" ";
//    // }
//    for(int i =0;i<ans.size();i++){
//       cout<<ans[i];
//    }
//    }
//-------FIRST REPEATING ELEMENT-------------
//  int main()
//    int a[] = {1,5,3,4,3,5,6,5};
//    int flag =0;
//    int n = sizeof(a)/sizeof(int);
//    for(int i = 0;i<n;i++){
//       //if(flag == 0){
//       for(int j = i+1;j<n;j++){
//          if(flag==0){
//          if(a[i]==a[j]){
//             cout<<a[i]<<" is found at "<<(i+1)<<" index";
//             flag = 1;
//          }
//          }
//       }
//      // }
//    }
//  }
//-------SORTING AND SWAPPING METHOD --------
// int main(){
//    int a[] = {3,3,3,3};
//    int n = sizeof(a)/sizeof(int);
//    int i = 0;
//    while(i<n){
//       int index = a[i]-1;
//       if(a[i]!=a[index]){
//          swap(a[i],a[index]);
//       }
//       else 
//       i++;
//    }
//    for(int i =0;i<n;i++){
//       if(a[i]!=i+1){
//          cout<<i+1<<" ";
//       }
//    }
   // for(int i = 0;i<n;i++){
   //    int index = abs(a[i]);
   //    if(a[index-1]>0){
   //       a[index-1]*=-1;
   //    }
   // }
   // // for(int i = 0;i<n;i++){
   // //    cout<<a[i]<<" ";
   // // }
   // for(int i = 0;i<n;i++){
   //    if(a[i]>0){
         
   //       cout<<(i+1);
   //    }
   // }
//}
//  int main(){
//    int arr[5];
//    for(int i = 0;i<5;i++){
//       cin>>arr[i];
//    }
//    // --------positioning method---------
//    while(arr[0]!=arr[arr[0]]){
//       swap(arr[0],arr[arr[0]]);
//    }
//    cout<<arr[0];
   //--------negative marked method-------
   // for(int i = 0;i<5;i++){
   //    int index = abs(arr[i]);
   //    if(arr[index]<0){
   //    cout<<abs(arr[index]);
   //    }else {
   //    arr[index]*=-1;
   //    }
   // }
   // sort(begin(arr),end(arr));
   // for(int i = 0;i<5;i++)
   // cout<<arr[i]<<" ";
   // for(int i = 0;i<5;i++){
   //    if(arr[i]==arr[i+1])
   //    cout<<"this is duplicate "<<arr[i];
   // }
 //}
//---------MOVE -VE NUMBER TO LEFT SIDE----------
// int main(){
//    int arr[6];
//    for(int i = 0;i<6;i++){
//       cin>>arr[i];
//    }
//    int l = 0,h = 5;
//    while(l<=h){
//     if(arr[l]<0){
//       l++;
//     }else
//      if(arr[h]>0){
//        h--;
//     }
//     else{
//       swap(arr[l],arr[h]);

//     }

//    }
//    for(int i = 0;i<6;i++){
//       cout<<arr[i]<<" ";
//    }
   
// }
// int main(){
//    int arr[30];
//  for(int i = 0;i<6;i++)
//   cin>>arr[i];
//   int m = 0,l= 0,h=5;
//   while(m<=h){
//   for(int i=0;i<6;i++){
//    if(arr[m]==0){
//       swap(arr[m],arr[l]);
//       m++,l++;
//    }else if(arr[m]==1){
//       m++;
//    }
//    else{
//       swap(arr[m],arr[h]);
//       h--;
//    }
//  }
//   }
//  for(int i = 0;i<6;i++){
//    cout<<arr[i]<<" ";
//  }
// }
// --------SORT 0,1,2 (COLORS)------------
// int main(){
//  int arr[30];
//  int zero=0,ones=0, twos=0;
//  for(int i = 0;i<6;i++)
//   cin>>arr[i];
//   for(int i = 0;i<6;i++){
//    if(arr[i]==0)
//    zero++;
//    if(arr[i]==1)
//    ones++;
//    if(arr[i]==2)
//    twos++;
//   }
//   cout<<zero<<" "<<ones<<" "<<twos;
//   cout<<endl;
//   for(int i = 0;i<zero;i++)
//   arr[i]=0;
//   for(int i = zero;i<(ones+zero);i++)
//   arr[i]= 1;
//   for(int i = (ones+zero);i<(zero+ones+twos);i++)
//   arr[i]=2;
//   for(int i = 0;i<6;i++)
//   cout<<arr[i]<<" ";
// }
//--------2 D ARRAY -------------
//-------VECTOR---------
//int main(){
// vector<vector<int> > arr;
// vector<int> a{1,2,3};
// vector<int> b{4,5,6};
// vector<int> c{7,8,9};
// arr.push_back(a);
// arr.push_back(b);
// arr.push_back(c);
// for(int i = 0;i<arr.size();i++){
//    for(int j = 0;j<arr[0].size();j++){
//       cout<<arr[i][j]<<" ";
//    }
//    cout<<endl;
// }
//  vector<vector<int> > arr(5,vector<int>(4,-1));
//  for(int i = 0;i<arr.size();i++){
//    for(int j = 0;j<arr[0].size();j++){
//       cout<<arr[i][j]<<" ";
//    }
//    cout<<endl;
// }
// }
//------- TRANSPOSE--------
// int main(){
//    int arr[3][3];
//    for(int i = 0;i<3;i++){
//       for(int j = 0;j<3;j++){
//          cin>>arr[i][j];
//       }
//    }
//    for(int i = 0;i<3;i++){
//       for(int j = 0;j<3;j++){
//          if(i<j){
//             swap(arr[i][j],arr[j][i]);
//          }
//       }
//    }

//    for(int i = 0;i<3;i++){
//       for(int j = 0;j<3;j++){
//          cout<<arr[i][j];
//       }
//       cout<<endl;
//    }
// }
// --------FIND MAX ELEMENT-------
// int max( int arr[][3],int row, int col){
//    int max =   INT16_MIN;
//    for(int i = 0;i<3;i++){
//       for(int j = 0;j<3;j++){
//          if(max <arr[i][j]){
//             max = arr[i][j];
//          }
//       }
//    }
//    return max;
// }
// int main(){
//    int arr[3][3];
//    for(int i = 0;i<3;i++){
//       for(int j = 0;j<3;j++){
//          cin>>arr[i][j];
//       }
//    }
//     int maxnum = max(arr,3,3);
//     cout<<maxnum;
// }
//-------FIND key ELEMENT--------------
// int main(){
   
//    int arr[3][3];
//    for(int i = 0;i<3;i++){
//       for(int j = 0;j<3;j++){
//          cin>>arr[i][j];
//       }
//    }
//    int key =8;
//    for(int i = 0; i<3;i++){
//       for(int j = 0; j<3;j++){
//        if(key == arr[i][j]){
//        cout<<"Present";
//        break;
//        }
//       }
//     }
//    }
//--------COL WISE PRINT SUM --------
// int main(){
//    int arr[3][3];
//    for(int i = 0;i<3;i++){
//       for(int j = 0;j<3;j++){
//          cin>>arr[i][j];
//       }
//    }
//    for(int i = 0; i<3;i++){
//        int sum = 0;
//       for(int j = 0; j<3;j++){
//          sum = sum + arr[j][i];
//       }
//       cout<<sum<<" ";
//          }
//    }
// ---------ROW SUM ------------
// int main(){
//    int arr[3][3];
//    for(int i = 0;i<3;i++){
//       for(int j = 0;j<3;j++){
//          cin>>arr[i][j];
//       }
//    }
//    for(int i = 0; i<3;i++){
//        int sum = 0;
//       for(int j = 0; j<3;j++){
//          sum = sum + arr[i][j];
//       }
//       cout<<sum<<" ";
//          }
//    }
//----SORTING 0'S AND 1'S --------
// int main(){
//    vector<int> arr{0,1,0,1,0,1,1,1,0,0,1};
//    int i=0;
//    int e = arr.size()-1;
//    while(i!=e){
//       if(arr[i]==0){
   
//       i++;
      
//       }
//    if(arr[i]==1){
//    swap(arr[i],arr[e]);
//    e--;
//    }
//    }
//    for(int i = 0;i<arr.size();i++){
//       cout<<arr[i]<<" ";
//    }
// }
//--------PAIR SUM  and triplet sum ----------------
// int main(){
//    vector<int> a = {1,2,3,4,5};
//    for(int i = 0;i<a.size();i++){
//       for(int j = i+1; j<a.size();j++){
//          for(int k = j+1;k<a.size();k++){
//             if((a[i]+a[j]+a[k])==9)
//              cout<<a[i]<<","<<a[j]<<","<<a[k]<<endl;
//          }
//          // if((a[i]+a[j])==7){
//          //    cout<<a[i]<<","<<a[j]<<endl;
//          // }
//       }
//    }
// }
//--------INTERSECTION OF TWO ARRAYS-------
// int main(){
//    int a[]= {1,2,3,4};
//    int as = 4;
//    int b[]= {4,2,2,6,7};
//    int bs = 5;
//    vector<int> ans;
//    for(int i = 0;i<as;i++){
//       for(int j= 0; j<bs;j++){
//          if(a[i]==b[j]){ 
//          ans.push_back(a[i]);
//          break;
//          }
//    }
//    }
//    for(int i = 0;i<ans.size();i++){
//       cout<<ans[i]<<" ";
//    }
//    }//---------UNION OF TWO ARRAYS-----------
// int main(){
//    int arr[] = {1,2,3,4,5};
//    int sizea = 5;
//    int brr[] = {9,8,7,6};
//    int sizeb = 4;
//    vector<int>ans;
//    for(int i =0;i<sizea;i++){
//       ans.push_back(arr[i]);
//    }
//    for(int i =0;i<sizeb;i++){
//       ans.push_back(brr[i]);
//    }
//    for(int i = 0; i<ans.size();i++){
//       cout<<ans[i]<<" ";
//    }
// }
// int find(vector<int> arr){
//    int ans = 0;
//    for(int i=0 ;i<arr.size();i++){
//       ans = ans^arr[i];
//    }
//    return ans;
// }
// int main(){
//    int n;
//    cout<<"Enter n ";
//    cin>>n;
//    vector<int> arr(n);
//    for(int i = 0;i<arr.size();i++){
//       cin>>arr[i];
//    }
//  int uni = find(arr);
//  cout<<uni <<" ";
// }
//    int arr[]= {1,2,3,4,5,6,7,8,9};
//    int temp;
//    int n = 9;
//    for(int i = 0;i<n/2;i++){
//     temp = arr[i];
//     arr[i]=arr[n-1-i];
//     arr[n-1-i]= temp;
//    }
//     for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//      }
   //   vector<int> arr;
   //   arr.push_back(12);
   //   arr.push_back(13);
   //   for(int i= 0;i<arr.size();i++){
   //      cout<<arr[i]<<" ";
   //   }
   //   arr.pop_back();
   //   for(int i= 0;i<arr.size();i++){
   //      cout<<arr[i]<<" ";
   //   }

     //int ans = (sizeof(arr)/sizeof(bool));
     //cout<<ans<<" ";
     //cout<<sizeof(bool);
//    int s = 0;
//    int end = size -1;
// while(s<=end){
//     if(s>end)
//     break;
//     else{
//         swap(arr[s],arr[end]);
//     // cout<<arr[s]<<" ";
//     //cout<<arr[end]<<" ";
//     s++;
//     end--;
//     }
// }
//     for(int i=0;i<size ;i++){
//         cout<<arr[i]<<" ";
//     }

//     // int arr[] = {0,0,0,1,1,1,0,1,1,0};
    // int size = 10;
    // int z = 0;
    // int o = 0;
    // for(int i =0;i<size ;i++){
    //     if(arr[i]==0){
    //      z++;
    //     }
    //     if(arr[i]==1){
    //      o++;
    //     }
    // }
    // cout<<z<<" ";
    // cout<<o<<" ";
