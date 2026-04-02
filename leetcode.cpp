///////////////25-03-2026///////////
////Problem1: TWO SUM
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

////Problem2: MAJORITY ELEMENT
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
////Problem3: BEST TIME TO BUY AND SELL STOCK 
////Approach: Greedy (Track minimum price), Time Complexity: O(n), Space Complexity: O(1)
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

/////////////////28-03-2026///////////////
////Problem4: Implement pow(x, n), which calculates x raised to the power n
////Approach: Binary Exponentiation (Exponentiation by Squaring), Time Complexity: O(log n), Space Complexity: O(1)
class Solution {
public:
    double myPow(double x, int n) {
        long binary = n;
        if(n < 0){
            x = 1/x;
            binary = -binary;
        }
        double ans = 1;
        while(binary > 0){
            if(binary % 2 == 1){
                ans *= x;
            }
            x *= x;
            binary /= 2;
        }
        return ans;
    }
};

///////////////29-03-2026/////////
////// Problem5: Container With Most Water
// Approach: Two Pointer (Greedy), Time Complexity: O(n), Space Complexity: O(1)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int i = 0;
        int j = height.size() - 1;
        while(i < j){
            int width = j - i;
            int currentHeight = min(height[i], height[j]);
            int currentWater = width * currentHeight;
            maxWater = max(maxWater, currentWater);
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxWater;
    }
};

///////////////31-03-2026/////////////
//////Problem6: Search in Rotated Sorted Array
////Approach: Binary search, Time complexity: O(logN)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end){
            int mid = start + ((end - start) / 2);
            if(target == nums[mid]){
                return mid;
            }
            if(nums[start] <= nums[mid]){
                if(nums[start] <= target && target <= nums[mid]){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }else{
                if(nums[mid] <= target && target <= nums[end]){
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

////////////01-04-2026//////////////
//////Problem7: Peak index in a mountain array
//////Approach: Binary search, Time complexity: O(logN)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1;
        int end = arr.size() - 2;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
                return mid;
            }
            if(arr[mid - 1] < arr[mid]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
    }
};

//////////////02-04-2026/////////
//////Problem8: Single element in a sorted array
//////Approach: Binary search, Time complexity O(logN)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        int start = 0;
        int end = n - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(mid == 0 && nums[0] != nums[1]) return nums[0];
            if(mid == n - 1 && nums[n - 1] != nums[n - 2]) return nums[n - 1];
            if(nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]){
                return nums[mid];
            }
            if(mid % 2 != 0){
               if(nums[mid] == nums[mid - 1]){
                start = mid + 1;
               }else{
               end = mid - 1;
               }
            }else{
                if(nums[mid] == nums[mid - 1]){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
};