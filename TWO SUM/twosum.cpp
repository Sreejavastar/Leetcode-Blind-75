#include<bits/stdc++.h>
using namespace std;

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if (numToIndex.find(complement) != numToIndex.end()) {
                ans.push_back(numToIndex[complement]);
                ans.push_back(i);
                return ans;
            }
            
            numToIndex.emplace(nums[i], i);
        }
        
        return ans;
    }
};

int main() {
    // Example input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    
    if (result.size() == 2) {
        cout << "Indices of the two numbers that add up to the target: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No valid solution found." << endl;
    }
    
    return 0;
}
