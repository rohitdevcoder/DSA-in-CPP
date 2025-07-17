#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Brute Force 
// vector<int>unionArray(vector<int>& a,vector<int>& b){
//     int n1 = a.size();
//     int n2 = b.size();
    
//     set<int>Set;

//     for(int i = 0;i<n1;i++){
//         Set.insert(a[i]);
//     }

//     for(int i = 0;i<n2;i++){
//         Set.insert(b[i]);
//     }

//     vector<int>Union;
//     for(auto it:Set){
//         Union.push_back(it);
//     }
//     return Union;
// }

// int main(){
//     vector<int>a ={1,1,6,6,3,9,7,7,8,8,8};
//     vector<int>b = {2,7,8,9,5,6,12,13,15};

//     vector<int>Union=unionArray(a,b);
//     for(int val : Union){
//         cout << val << " ";
//     }

//     return 0;
// }


// Optimal Approach 
vector<int>UnionOfTwo(vector<int>& a,vector<int>& b){
 int n1 = a.size();
 int n2 = b.size();
 int i=0, j=0;
 vector<int>UnionArr;
 while(i<n1 && j<n2){
    if(a[i]<=b[j]){
    if(UnionArr.size()==0 || UnionArr.back() !=a[i]){
     UnionArr.push_back(a[i]);
    }
    i++;
    }else{
     if(UnionArr.size()==0 || UnionArr.back() !=b[j]){
     UnionArr.push_back(b[j]);
    }
    j++;
    }
 }
 while(j<n2){
       if(UnionArr.size()==0 || UnionArr.back() !=b[j]){
     UnionArr.push_back(b[j]);
    }
    j++;
 }
 while(i<n1){
    if(UnionArr.size()==0 || UnionArr.back() !=a[i]){
     UnionArr.push_back(a[i]);
    }
    i++;
 }

return UnionArr;
}


int main(){
   vector<int>a = {1, 2, 3, 4, 5};
   vector<int>b={1, 2, 7};
   vector<int>UnionArray = UnionOfTwo(a,b);
   for(int val : UnionArray){
    cout << val << " ";
   }

    return 0;
}