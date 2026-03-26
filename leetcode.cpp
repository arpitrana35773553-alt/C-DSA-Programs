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

////////////////26-03-2026///////////
////PROBLEM: BEST TIME TO BUY AND SELL STOCK 
//// Platform: LeetCode, Approach: Greedy (Track minimum price), Time Complexity: O(n), Space Complexity: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxprofit = 0;
      int bestBuy = prices[0];
      for(int i = 1;i < prices.size();i++){
        if(prices[i] > bestBuy){
            maxprofit = max(maxprofit,prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
      }
      return maxprofit;
    }
};