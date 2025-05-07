// Brute Force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }

        return ans;
    }
};

//Optimal

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; 

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (map.find(complement) != map.end()) {
                return { map[complement], i };
            }

            map[nums[i]] = i;
        }

        return {}; 
    }
};
