#include<iostream>
#include<vector>
using namespace std;

// We have to give an array with the indices of two number whose sum is equal to target - 

vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1 ;j<n;j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                    
                }
            }
        }

        return {};
    }

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to " << target << " are: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers in the array add up to " << target << endl;
    }

    return 0;
}