class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int,int> map;

        for(int i:nums){
            map[i]++;
        }

        for(auto it : map){
                if(it.second > 1) return true;
        }
        return false;
        
    }
};
