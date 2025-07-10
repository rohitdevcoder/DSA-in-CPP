#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>nums){
    int ans = 0;
    for(int val : nums){
        ans ^=val;
    }
    return ans;
}

int main(){
vector<int>nums={1,1,2,2,6};
cout << "The single Number is : "<< singleNumber(nums)<<"\n";

return 0;
}

