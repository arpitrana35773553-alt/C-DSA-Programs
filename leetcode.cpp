///////////////25-03-2026///////////
////PROBLEM: TWO SUM
////PLATFORM: LEETCODE
////Approach: Brute Force, Time Complexity: O(n^2), Space Complexity: O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        for(int i = 0;i < nums.size();i++){
            for(int j = 0;j < nums.size();j++){
                if(nums[i] + nums[j] == target && i != j){
                   vec.push_back(i);
                   vec.push_back(j);
                   return vec;
                }
            }
        }
    return {};
    }
};

////PROBLEM: MAJORITY ELEMENT
//// Approach: Boyer-Moore Voting Algorithm, Time Complexity: O(n), Space Complexity: O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0, n = nums.size()/2;
        for(int i = 0;i < nums.size();i++){
            if(freq==0){
                ans = nums[i];
            }
            if(nums[i]==ans){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }
};