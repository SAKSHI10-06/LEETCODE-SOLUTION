class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for (int i=0;i<nums.size();i++){
            int key=target-nums[i];
            if (hash.find(key)!=hash.end())
            return {hash[key] , i};
            else
            hash.insert({nums[i],i});
        }
        return {};
    }
};