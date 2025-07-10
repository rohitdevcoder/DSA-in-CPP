#include<iostream>
#include<vector>
using namespace std;

vector<int>SelectionSort(vector<int>& nums){
    int n=nums.size();
    for(int i =0;i<=n-2;i++){
        int mini = i;
        for(int j = i;j<=n-1;j++){
            if (nums[j]<nums[mini])
            {
               mini = j;
            }
            
        }
        swap(nums[i],nums[mini]);
    }
    return nums;
}

int main(){
   vector<int>arr={12,5,6,78,9,23,3,5,6,4,5};
   SelectionSort(arr);
   for(int val : arr){
    cout<< val << " ";
   }

    return 0;
}