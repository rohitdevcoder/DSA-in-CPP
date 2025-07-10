#include<iostream>
#include<vector>
using namespace std;

void BoubleSort(vector<int>& nums){
    int n =nums.size();
    for(int i=0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

void Bubble(int nums[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap = false;
        for(int j =0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                // swap(nums[j],nums[j+1]);
                int temp = nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;

                isSwap=true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

int main(){
    // vector<int>arr={12,6,8,7,4,45,6,32,23};
    // BoubleSort(arr);

    // for(int val : arr){
    //     cout<< val << " ";
    // }

    // int arr[]={12,6,8,7,4,45,6,32,23};
    // int n =sizeof(arr)/sizeof(int);
    // Bubble(arr,n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
     
    // int explin[]={1,2,3,8,9,7};
    // for(int i = 0;i<6;i++){
    //     cout<< explin[i]<< " ";
    // }

    return 0;
}  