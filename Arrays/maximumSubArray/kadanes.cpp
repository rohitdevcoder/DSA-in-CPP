#include <iostream>
#include <vector>
using namespace std;

//Time  complexity is : O(n) linear time complexity

int maxSubSum(vector<int>nums){
    int currentSum = 0,maxSum=INT8_MIN;
    for(int vals : nums){
        currentSum +=vals;
        maxSum = max(currentSum,maxSum);
        if(currentSum<0){
            currentSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int>nums={-2,3,-5,6,-7,-8,9};
    cout<< "Maximum sum of the sub array is : "<<maxSubSum(nums)<<"\n";
    return  0;
}


// ----------------using array----------
    // int arr[]={3,-4,5,4,-1,7,-8};
    // int n = sizeof(arr)/sizeof(int);
    // int currentSum = 0, maxSum = INT8_MIN;

    // for(int i =0;i<n;i++){
    //     currentSum +=arr[i];
    //     maxSum = max(currentSum,maxSum);
    //     if(currentSum<0){
    //         currentSum = 0;
    //     }
    // }

    // cout<<"The maximum sum is : "<<maxSum<<endl;